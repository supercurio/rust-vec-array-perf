# Nexus S (Cortex A8, 1.0 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   212.249 ns      98x realtime
        array slice:    219.921 ns      95x realtime
        whole array:    140.087 ns      149x realtime

Buffer size: 16 samples
        sized vector:   211.623 ns      98x realtime
        array slice:    220.113 ns      95x realtime
        whole array:    169.137 ns      123x realtime

Buffer size: 32 samples
        sized vector:   210.344 ns      99x realtime
        array slice:    217.710 ns      96x realtime
        whole array:    167.274 ns      125x realtime

Buffer size: 64 samples
        sized vector:   209.690 ns      99x realtime
        array slice:    220.190 ns      95x realtime
        whole array:    163.042 ns      128x realtime

Buffer size: 128 samples
        sized vector:   203.522 ns      102x realtime
        array slice:    209.473 ns      99x realtime
        whole array:    160.370 ns      130x realtime

Buffer size: 256 samples
        sized vector:   201.899 ns      103x realtime
        array slice:    209.496 ns      99x realtime
        whole array:    160.372 ns      130x realtime

Buffer size: 512 samples
        sized vector:   201.715 ns      103x realtime
        array slice:    208.867 ns      100x realtime
        whole array:    160.698 ns      130x realtime

Buffer size: 1024 samples
        sized vector:   201.835 ns      103x realtime
        array slice:    207.856 ns      100x realtime
        whole array:    160.971 ns      129x realtime

Buffer size: 2048 samples
        sized vector:   202.164 ns      103x realtime
        array slice:    208.811 ns      100x realtime
        whole array:    160.288 ns      130x realtime

Buffer size: 4096 samples
        sized vector:   201.950 ns      103x realtime
        array slice:    208.186 ns      100x realtime
        whole array:    160.240 ns      130x realtime
~~~
