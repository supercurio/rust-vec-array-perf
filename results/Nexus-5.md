# Nexus 5 (Snapdragon 800, Krait 400, 2.26 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   15.497 ns       1344x realtime
        array slice:    15.181 ns       1372x realtime
        whole array:    6.646 ns        3135x realtime

Buffer size: 16 samples
        sized vector:   15.313 ns       1361x realtime
        array slice:    14.767 ns       1411x realtime
        whole array:    9.513 ns        2190x realtime

Buffer size: 32 samples
        sized vector:   15.001 ns       1389x realtime
        array slice:    14.714 ns       1416x realtime
        whole array:    9.357 ns        2227x realtime

Buffer size: 64 samples
        sized vector:   14.831 ns       1405x realtime
        array slice:    14.683 ns       1419x realtime
        whole array:    9.348 ns        2229x realtime

Buffer size: 128 samples
        sized vector:   14.729 ns       1414x realtime
        array slice:    14.656 ns       1421x realtime
        whole array:    9.333 ns        2232x realtime

Buffer size: 256 samples
        sized vector:   14.692 ns       1418x realtime
        array slice:    14.649 ns       1422x realtime
        whole array:    9.331 ns        2233x realtime

Buffer size: 512 samples
        sized vector:   14.659 ns       1421x realtime
        array slice:    14.644 ns       1423x realtime
        whole array:    9.325 ns        2234x realtime

Buffer size: 1024 samples
        sized vector:   14.667 ns       1420x realtime
        array slice:    14.638 ns       1423x realtime
        whole array:    9.329 ns        2233x realtime

Buffer size: 2048 samples
        sized vector:   14.641 ns       1423x realtime
        array slice:    14.635 ns       1424x realtime
        whole array:    9.332 ns        2232x realtime

Buffer size: 4096 samples
        sized vector:   14.639 ns       1423x realtime
        array slice:    14.642 ns       1423x realtime
        whole array:    9.331 ns        2233x realtime
~~~
