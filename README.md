# Rust Vector and Array performance differences
This repository contains sample code showcasing differences in performance
occuring on most platforms tested.

Rust follows the philosophy of "zero-cost abstrations", which was introduced
with C++ to describe higher-level data structures and algorithms built in the
language and its standard library providing the same performance as optimal
low-level code.

## Code illustrating the issue
The sample code provided in both stable
[Rust](https://github.com/supercurio/rust-vec-array-perf/tree/master/rust) and
[C++11](https://github.com/supercurio/rust-vec-array-perf/tree/master/cpp)
implement a typical audio DSP algorithm called
[digital biquad filter](https://en.wikipedia.org/wiki/Digital_biquad_filter)
using Direct Form 2 IIR in a _textbook_ way: without SIMD, parallelization
other any optimization.

The C++ code is very close to the Rust one. Both generate an identical output.
It can be compiled with either GCC or Clang for speed comparison with the Rust
code.

In [results/](https://github.com/supercurio/rust-vec-array-perf/tree/master/results)
you can find benchmarks of the Rust and C++ implementation compiled for with
arm, armv7, aarch64 architectures, GCC and Clang compilers.

## Observations
* The same algoritm working on an Array-backed buffer is usually 20% to 60%
  faster than with a Vector-backed buffer
* Two most recently designed CPUs (1 Intel, 1 ARM64) tested perform
  identically between Array and Vector buffers
* Only one CPU tested (Intel Core2 Duo) is slower by 10% working on an Array
  buffer versus Vector
* The performance gap occurs on 32-bit and 64-bit architectures also x86_64
  and ARM processors

## Rust compared to C++
* Rust performance is comparable to C++ overall
* On the systems exhibiting the Vector/Array perf difference:
  * Rust Vector is slower than GCC C++ Vector
  * Rust Array is faster than GCC C++ Vector
  * Rust Vector is near-identical to Clang C++ Vector
