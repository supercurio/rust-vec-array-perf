# Intel i5 750 3.0 GHz (OC)
## x86_64

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   4.356 ns        4782x realtime
        array slice:    4.343 ns        4797x realtime
        whole array:    2.521 ns        8264x realtime

Buffer size: 16 samples
        sized vector:   5.182 ns        4020x realtime
        array slice:    5.233 ns        3981x realtime
        whole array:    4.445 ns        4687x realtime

Buffer size: 32 samples
        sized vector:   5.657 ns        3683x realtime
        array slice:    5.658 ns        3682x realtime
        whole array:    4.589 ns        4540x realtime

Buffer size: 64 samples
        sized vector:   5.893 ns        3535x realtime
        array slice:    5.891 ns        3537x realtime
        whole array:    4.665 ns        4465x realtime

Buffer size: 128 samples
        sized vector:   5.911 ns        3524x realtime
        array slice:    5.814 ns        3583x realtime
        whole array:    4.739 ns        4396x realtime

Buffer size: 256 samples
        sized vector:   5.840 ns        3567x realtime
        array slice:    5.841 ns        3567x realtime
        whole array:    4.786 ns        4353x realtime

Buffer size: 512 samples
        sized vector:   5.874 ns        3547x realtime
        array slice:    5.916 ns        3521x realtime
        whole array:    4.760 ns        4377x realtime

Buffer size: 1024 samples
        sized vector:   5.852 ns        3560x realtime
        array slice:    5.853 ns        3559x realtime
        whole array:    4.744 ns        4392x realtime

Buffer size: 2048 samples
        sized vector:   5.851 ns        3561x realtime
        array slice:    5.853 ns        3560x realtime
        whole array:    4.757 ns        4380x realtime

Buffer size: 4096 samples
        sized vector:   5.906 ns        3527x realtime
        array slice:    5.854 ns        3559x realtime
        whole array:    4.749 ns        4386x realtime
~~~

### C++ vector performance reference
#### gcc version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04.3)

~~~
C++ vector performance reference

Buffer size: 8 samples
        C++ vector:     3.680 ns        5661x realtime

Buffer size: 16 samples
        C++ vector:     4.249 ns        4904x realtime

Buffer size: 32 samples
        C++ vector:     4.634 ns        4496x realtime

Buffer size: 64 samples
        C++ vector:     4.831 ns        4313x realtime

Buffer size: 128 samples
        C++ vector:     4.963 ns        4197x realtime

Buffer size: 256 samples
        C++ vector:     4.990 ns        4175x realtime

Buffer size: 512 samples
        C++ vector:     5.004 ns        4163x realtime

Buffer size: 1024 samples
        C++ vector:     5.016 ns        4154x realtime

Buffer size: 2048 samples
        C++ vector:     5.084 ns        4098x realtime

Buffer size: 4096 samples
        C++ vector:     5.017 ns        4152x realtime
~~~

### C++ vector performance reference
#### clang version 3.8.0-2ubuntu3~trusty4 (tags/RELEASE_380/final)

~~~
Buffer size: 8 samples
        C++ vector:     4.826 ns        4317x realtime

Buffer size: 16 samples
        C++ vector:     5.238 ns        3977x realtime

Buffer size: 32 samples
        C++ vector:     5.548 ns        3755x realtime

Buffer size: 64 samples
        C++ vector:     5.706 ns        3651x realtime

Buffer size: 128 samples
        C++ vector:     5.882 ns        3542x realtime

Buffer size: 256 samples
        C++ vector:     5.830 ns        3573x realtime

Buffer size: 512 samples
        C++ vector:     5.882 ns        3542x realtime

Buffer size: 1024 samples
        C++ vector:     5.882 ns        3542x realtime

Buffer size: 2048 samples
        C++ vector:     5.861 ns        3555x realtime

Buffer size: 4096 samples
        C++ vector:     5.876 ns        3545x realtime
