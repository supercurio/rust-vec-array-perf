# Nexus 7 (2012) (Tegra 3 T30L, ARM Cortex-A9, 1.3 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   37.377 ns       557x realtime
        array slice:    35.489 ns       587x realtime
        whole array:    16.729 ns       1245x realtime

Buffer size: 16 samples
        sized vector:   35.825 ns       582x realtime
        array slice:    35.020 ns       595x realtime
        whole array:    26.945 ns       773x realtime

Buffer size: 32 samples
        sized vector:   35.758 ns       583x realtime
        array slice:    35.045 ns       594x realtime
        whole array:    26.673 ns       781x realtime

Buffer size: 64 samples
        sized vector:   37.017 ns       563x realtime
        array slice:    34.588 ns       602x realtime
        whole array:    26.155 ns       797x realtime

Buffer size: 128 samples
        sized vector:   35.495 ns       587x realtime
        array slice:    34.439 ns       605x realtime
        whole array:    26.047 ns       800x realtime

Buffer size: 256 samples
        sized vector:   35.210 ns       592x realtime
        array slice:    34.357 ns       606x realtime
        whole array:    25.987 ns       802x realtime

Buffer size: 512 samples
        sized vector:   35.173 ns       592x realtime
        array slice:    34.324 ns       607x realtime
        whole array:    25.964 ns       802x realtime

Buffer size: 1024 samples
        sized vector:   35.338 ns       590x realtime
        array slice:    34.351 ns       606x realtime
        whole array:    25.955 ns       803x realtime

Buffer size: 2048 samples
        sized vector:   35.186 ns       592x realtime
        array slice:    34.475 ns       604x realtime
        whole array:    25.990 ns       802x realtime

Buffer size: 4096 samples
        sized vector:   35.726 ns       583x realtime
        array slice:    36.341 ns       573x realtime
        whole array:    27.630 ns       754x realtime
~~~
