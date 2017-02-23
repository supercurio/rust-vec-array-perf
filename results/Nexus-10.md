# Nexus 10 (Samsung Exynos 5250, Cortex-A15, 1.7 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   14.226 ns       1465x realtime
        array slice:    12.795 ns       1628x realtime
        whole array:    6.029 ns        3456x realtime

Buffer size: 16 samples
        sized vector:   12.840 ns       1623x realtime
        array slice:    12.635 ns       1649x realtime
        whole array:    11.194 ns       1861x realtime

Buffer size: 32 samples
        sized vector:   13.043 ns       1597x realtime
        array slice:    12.551 ns       1660x realtime
        whole array:    10.019 ns       2079x realtime

Buffer size: 64 samples
        sized vector:   12.679 ns       1643x realtime
        array slice:    12.393 ns       1681x realtime
        whole array:    10.115 ns       2060x realtime

Buffer size: 128 samples
        sized vector:   12.519 ns       1664x realtime
        array slice:    13.762 ns       1514x realtime
        whole array:    10.312 ns       2020x realtime

Buffer size: 256 samples
        sized vector:   12.506 ns       1666x realtime
        array slice:    12.324 ns       1690x realtime
        whole array:    10.144 ns       2054x realtime

Buffer size: 512 samples
        sized vector:   12.446 ns       1674x realtime
        array slice:    12.300 ns       1694x realtime
        whole array:    10.159 ns       2051x realtime

Buffer size: 1024 samples
        sized vector:   12.509 ns       1665x realtime
        array slice:    12.296 ns       1694x realtime
        whole array:    10.160 ns       2050x realtime

Buffer size: 2048 samples
        sized vector:   12.421 ns       1677x realtime
        array slice:    12.332 ns       1689x realtime
        whole array:    10.167 ns       2049x realtime

Buffer size: 4096 samples
        sized vector:   14.163 ns       1471x realtime
        array slice:    14.514 ns       1435x realtime
        whole array:    10.146 ns       2053x realtime
~~~
