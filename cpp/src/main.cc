/*
 *  Copyright Francois Simond 2017
 */

#include <chrono>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Audio sample rate for the test set, used for realtime speed
// calculation
#define SAMPLE_RATE 48000.0
// Will allow to test buffer sizes up to 4096
#define BUFFER_LEN_TESTS 13
// Total length of samples the filter benchmarks are ran on
#define SAMPLE_COUNT 524288
// Select how many IIR filters should be applied consecutively
// on each buffer during the benchmark
#define FILTER_COUNT 100

// #define WRITE_BUFFERS

// Square wave generator settings and status
struct SquareWave {
  size_t switch_samples;
  bool status;
  size_t progress;

  explicit SquareWave(double frequency) {
    switch_samples = round(SAMPLE_RATE / frequency / 2.0);
    status = false;
    progress = 0;
  }

  void reset() {
    status = false;
    progress = 0;
  }
};

// Fill the provided buffer with a square wave generator
void fill_buffer(vector<double> &buf, SquareWave *sqw) {
  for (unsigned int i = 0; i < buf.size(); i++) {
    if (sqw->progress == sqw->switch_samples) {
      sqw->progress = 0;
      sqw->status = !sqw->status;
    }

    buf[i] = sqw->status ? 0.5 : -0.5;
    sqw->progress++;
  }
}

// 2nd order biquad filter
struct Biquad {
  double b0;
  double b1;
  double b2;
  double a1;
  double a2;

  double x1 = 0.0;
  double x2 = 0.0;
  double y1 = 0.0;
  double y2 = 0.0;

  // Calculate coefficients and initialize the Biquad struct following
  // audio EQ CookBook peak eq from Robert Bristow-Johnson
  static Biquad peak_eq(double fs, double f0, double q, double db_gain) {
    double A = pow(10.0, db_gain / 40.0);
    double omega = 2 * M_PIl * f0 / fs;

    double alpha = sin(omega) / (2 * q);

    Biquad bq;

    double a0 = 1 + alpha / A;

    bq.b0 = (1 + alpha * A) / a0;
    bq.b1 = (-2 * cos(omega)) / a0;
    bq.b2 = (1 - alpha * A) / a0;
    bq.a1 = bq.b1;
    bq.a2 = (1 - alpha / A) / a0;

    return bq;
  }

  // Reset filter's state accumulators
  void reset() {
    x1 = 0.0;
    x2 = 0.0;
    y1 = 0.0;
    y2 = 0.0;
  }
};

// Reset a list of Biquad
void reset_biquads(vector<Biquad> &biquads) {
  for (auto &biquad : biquads) {
    biquad.reset();
  }
}

#ifdef WRITE_BUFFERS
// Write buffers to disk in order to verify the algorithms's integrity
//
// Build with `WRITE_BUFFERS make` then
// run `md5sum /tmp/vec-array-perf-*`
// Each file should be identical as well as identical to the C++ demo's output
struct OutputPcmFile {
  std::ofstream writer;

  explicit OutputPcmFile(uint64_t buffer_len) {
    std::string path = "/tmp/vec_overhead_cpp_" + std::to_string(buffer_len);
    remove(path.c_str());
    writer.open(path, std::ofstream::binary);
  }

  void write_buffer(const vector<double> &buf) {
    writer.write((const char *)buf.data(), buf.size() * sizeof(double_t));
  }

  void close() { writer.close(); }
};
#endif

// Displays the benchmark timing results and a real-time performance estimate
void print_elapsed(std::string msg, std::chrono::steady_clock::time_point start,
                   uint64_t filter_count) {
  auto end = std::chrono::steady_clock::now();
  auto elapsed =
      std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  double duration =
      elapsed.count() / static_cast<double>(filter_count) / SAMPLE_COUNT;
  double realtime = 1.0 / duration / SAMPLE_RATE * 1e+9;
  cout << "\t" << msg << ":\t" << std::fixed << std::setprecision(3) << duration
       << " ns"
       << "\t" << std::setprecision(0) << realtime << "x realtime\n";
}

// Apply the supplied biquad digital filter coefficients using a
// Direct Form 2 IIR digital filter on the provided buffer
void iir(vector<double> &buf, Biquad *bq) {
  for (unsigned int i = 0; i < buf.size(); i++) {
    double x = buf[i];
    buf[i] = (bq->b0 * x) + (bq->b1 * bq->x1) + (bq->b2 * bq->x2) -
             (bq->a1 * bq->y1) - (bq->a2 * bq->y2);

    bq->x2 = bq->x1;
    bq->x1 = x;

    bq->y2 = bq->y1;
    bq->y1 = buf[i];
  }
}

int main(int argc, char **argv) {
  cout << "C++ vector performance reference\n";

  // initialize the square wave generator struct
  SquareWave *sqw = new SquareWave(50.0);

  // Generate an vector of biquads that will be applied
  // with the iir function later
  //
  // The biquads's gain is switched each time between positive  negative
  // in order to keep the input signal within thr -1.0/+1.0 range expected
  // If FILTER_COUNT is set to a multiple of 2, the output signal will remain
  // near identical to the input, beside the noise and distortion introduced
  // by 64-bit calculations
  vector<Biquad> biquads;
  bool biquad_gain_positive = true;
  for (unsigned i = 0; i < FILTER_COUNT; i++) {
    double db_gain = biquad_gain_positive ? 2.0 : -2.0;
    biquad_gain_positive = !biquad_gain_positive;
    biquads.push_back(Biquad::peak_eq(SAMPLE_RATE, 50.0, 0.3, db_gain));
  }

  // Iterate over buffer sizes
  for (unsigned int l = 3; l < BUFFER_LEN_TESTS; l++) {
    size_t buffer_len = pow(2, l);

    unsigned int filter_count = FILTER_COUNT;
    unsigned int buffer_count = SAMPLE_COUNT / buffer_len;

    cout << "\nBuffer size: " << buffer_len << " samples\n";

    // create the buffer
    vector<double> *buf = new vector<double>;
    buf->resize(buffer_len);

    sqw->reset();
    reset_biquads(biquads);

#ifdef WRITE_BUFFERS
    OutputPcmFile *output = new OutputPcmFile(buffer_len);
#endif

    std::chrono::steady_clock::time_point start =
        std::chrono::steady_clock::now();

    for (unsigned int i = 0; i < buffer_count; i++) {
      fill_buffer(*buf, sqw);

      for (unsigned int f = 0; f < filter_count; f++) {
        iir(*buf, &biquads[f]);
      }

#ifdef WRITE_BUFFERS
      output->write_buffer(buf);
#endif
    }

    print_elapsed("C++ vector", start, filter_count);

#ifdef WRITE_BUFFERS
    output->close();
    delete output;
#endif
  }

  delete sqw;

  return 0;
}
