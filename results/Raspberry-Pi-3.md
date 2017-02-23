# Raspberry Pi 3 (BCM2837, Cortex A53, 1.2 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   32.688 ns       637x realtime
        array slice:    27.094 ns       769x realtime
        whole array:    12.625 ns       1650x realtime

Buffer size: 16 samples
        sized vector:   31.817 ns       655x realtime
        array slice:    25.854 ns       806x realtime
        whole array:    22.531 ns       925x realtime

Buffer size: 32 samples
        sized vector:   31.218 ns       667x realtime
        array slice:    25.098 ns       830x realtime
        whole array:    21.782 ns       956x realtime

Buffer size: 64 samples
        sized vector:   30.918 ns       674x realtime
        array slice:    24.722 ns       843x realtime
        whole array:    21.393 ns       974x realtime

Buffer size: 128 samples
        sized vector:   30.766 ns       677x realtime
        array slice:    24.537 ns       849x realtime
        whole array:    21.198 ns       983x realtime

Buffer size: 256 samples
        sized vector:   30.686 ns       679x realtime
        array slice:    24.447 ns       852x realtime
        whole array:    21.100 ns       987x realtime

Buffer size: 512 samples
        sized vector:   30.632 ns       680x realtime
        array slice:    24.418 ns       853x realtime
        whole array:    21.051 ns       990x realtime

Buffer size: 1024 samples
        sized vector:   30.540 ns       682x realtime
        array slice:    24.431 ns       853x realtime
        whole array:    21.027 ns       991x realtime

Buffer size: 2048 samples
        sized vector:   30.518 ns       683x realtime
        array slice:    24.490 ns       851x realtime
        whole array:    21.017 ns       991x realtime

Buffer size: 4096 samples
        sized vector:   30.519 ns       683x realtime
        array slice:    24.759 ns       841x realtime
        whole array:    21.104 ns       987x realtime
~~~

### C++ vector performance reference
#### gcc version 4.9.2 (Raspbian 4.9.2-10)

~~~

Buffer size: 8 samples
        C++ vector:     29.148 ns       715x realtime

Buffer size: 16 samples
        C++ vector:     29.231 ns       713x realtime

Buffer size: 32 samples
        C++ vector:     28.827 ns       723x realtime

Buffer size: 64 samples
        C++ vector:     28.621 ns       728x realtime

Buffer size: 128 samples
        C++ vector:     28.520 ns       730x realtime

Buffer size: 256 samples
        C++ vector:     28.469 ns       732x realtime

Buffer size: 512 samples
        C++ vector:     28.443 ns       732x realtime

Buffer size: 1024 samples
        C++ vector:     28.432 ns       733x realtime

Buffer size: 2048 samples
        C++ vector:     28.450 ns       732x realtime

Buffer size: 4096 samples
        C++ vector:     28.551 ns       730x realtime
~~~

### C++ vector performance reference
#### clang version 3.9.0-4 (tags/RELEASE_390/final)

~~~
Buffer size: 8 samples
        C++ vector:     32.629 ns       638x realtime

Buffer size: 16 samples
        C++ vector:     31.580 ns       660x realtime

Buffer size: 32 samples
        C++ vector:     30.882 ns       675x realtime

Buffer size: 64 samples
        C++ vector:     30.533 ns       682x realtime

Buffer size: 128 samples
        C++ vector:     30.361 ns       686x realtime

Buffer size: 256 samples
        C++ vector:     30.274 ns       688x realtime

Buffer size: 512 samples
        C++ vector:     30.229 ns       689x realtime

Buffer size: 1024 samples
        C++ vector:     30.209 ns       690x realtime

Buffer size: 2048 samples
        C++ vector:     30.213 ns       690x realtime

Buffer size: 4096 samples
        C++ vector:     30.345 ns       687x realtime
~~~

