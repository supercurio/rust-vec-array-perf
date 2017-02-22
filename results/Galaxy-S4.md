# Galaxy S4 (Exynos 5 Octa 5410, Cortex A15, 1.6 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   15.906 ns       1310x realtime
        array slice:    13.587 ns       1533x realtime
        whole array:    6.361 ns        3275x realtime

Buffer size: 16 samples
        sized vector:   13.624 ns       1529x realtime
        array slice:    13.392 ns       1556x realtime
        whole array:    10.477 ns       1988x realtime

Buffer size: 32 samples
        sized vector:   13.439 ns       1550x realtime
        array slice:    13.321 ns       1564x realtime
        whole array:    10.678 ns       1951x realtime

Buffer size: 64 samples
        sized vector:   13.406 ns       1554x realtime
        array slice:    13.099 ns       1590x realtime
        whole array:    10.722 ns       1943x realtime

Buffer size: 128 samples
        sized vector:   13.276 ns       1569x realtime
        array slice:    13.105 ns       1590x realtime
        whole array:    10.810 ns       1927x realtime

Buffer size: 256 samples
        sized vector:   13.774 ns       1513x realtime
        array slice:    13.090 ns       1592x realtime
        whole array:    10.805 ns       1928x realtime

Buffer size: 512 samples
        sized vector:   13.211 ns       1577x realtime
        array slice:    13.059 ns       1595x realtime
        whole array:    10.826 ns       1924x realtime

Buffer size: 1024 samples
        sized vector:   13.186 ns       1580x realtime
        array slice:    13.057 ns       1596x realtime
        whole array:    10.839 ns       1922x realtime

Buffer size: 2048 samples
        sized vector:   13.124 ns       1587x realtime
        array slice:    13.233 ns       1574x realtime
        whole array:    10.835 ns       1923x realtime

Buffer size: 4096 samples
        sized vector:   13.345 ns       1561x realtime
        array slice:    13.375 ns       1558x realtime
        whole array:    10.827 ns       1924x realtime
~~~
