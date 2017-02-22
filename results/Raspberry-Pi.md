# Raspberry Pi 3
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   127.196 ns      164x realtime
        array slice:    103.026 ns      202x realtime
        whole array:    38.463 ns       542x realtime

Buffer size: 16 samples
        sized vector:   125.507 ns      166x realtime
        array slice:    101.103 ns      206x realtime
        whole array:    80.952 ns       257x realtime

Buffer size: 32 samples
        sized vector:   124.507 ns      167x realtime
        array slice:    100.113 ns      208x realtime
        whole array:    79.925 ns       261x realtime

Buffer size: 64 samples
        sized vector:   124.198 ns      168x realtime
        array slice:    99.503 ns       209x realtime
        whole array:    79.504 ns       262x realtime

Buffer size: 128 samples
        sized vector:   123.879 ns      168x realtime
        array slice:    99.261 ns       210x realtime
        whole array:    79.010 ns       264x realtime

Buffer size: 256 samples
        sized vector:   123.960 ns      168x realtime
        array slice:    99.244 ns       210x realtime
        whole array:    78.936 ns       264x realtime

Buffer size: 512 samples
        sized vector:   123.975 ns      168x realtime
        array slice:    99.237 ns       210x realtime
        whole array:    78.924 ns       264x realtime

Buffer size: 1024 samples
        sized vector:   124.117 ns      168x realtime
        array slice:    99.535 ns       209x realtime
        whole array:    79.122 ns       263x realtime

Buffer size: 2048 samples
        sized vector:   126.314 ns      165x realtime
        array slice:    100.981 ns      206x realtime
        whole array:    80.841 ns       258x realtime

Buffer size: 4096 samples
        sized vector:   134.988 ns      154x realtime
        array slice:    110.197 ns      189x realtime
        whole array:    90.434 ns       230x realtime
~~~

### C++ vector performance reference
#### C++ gcc version 4.9.2 (Raspbian 4.9.2-10)

~~~

Buffer size: 8 samples
        C++ vector:     113.724 ns      183x realtime

Buffer size: 16 samples
        C++ vector:     112.865 ns      185x realtime

Buffer size: 32 samples
        C++ vector:     112.574 ns      185x realtime

Buffer size: 64 samples
        C++ vector:     112.262 ns      186x realtime

Buffer size: 128 samples
        C++ vector:     112.140 ns      186x realtime

Buffer size: 256 samples
        C++ vector:     112.283 ns      186x realtime

Buffer size: 512 samples
        C++ vector:     112.376 ns      185x realtime

Buffer size: 1024 samples
        C++ vector:     112.410 ns      185x realtime

Buffer size: 2048 samples
        C++ vector:     114.360 ns      182x realtime

Buffer size: 4096 samples
~~~

### C++ vector performance reference
#### clang version 3.9.0-4 (tags/RELEASE_390/final)

~~~
Buffer size: 8 samples
        C++ vector:     132.577 ns      157x realtime

Buffer size: 16 samples
        C++ vector:     130.478 ns      160x realtime

Buffer size: 32 samples
        C++ vector:     129.185 ns      161x realtime

Buffer size: 64 samples
        C++ vector:     128.622 ns      162x realtime

Buffer size: 128 samples
        C++ vector:     128.426 ns      162x realtime

Buffer size: 256 samples
        C++ vector:     128.255 ns      162x realtime

Buffer size: 512 samples
        C++ vector:     128.243 ns      162x realtime

Buffer size: 1024 samples
        C++ vector:     128.615 ns      162x realtime

Buffer size: 2048 samples
        C++ vector:     130.834 ns      159x realtime

Buffer size: 4096 samples
        C++ vector:     141.427 ns      147x realtime
~~~

