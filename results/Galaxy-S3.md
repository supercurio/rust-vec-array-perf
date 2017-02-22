# Galaxy S3 (Exynos, Cortex A9, 1.4 GHz)
## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   31.488 ns       662x realtime
        array slice:    30.731 ns       678x realtime
        whole array:    14.643 ns       1423x realtime

Buffer size: 16 samples
        sized vector:   30.680 ns       679x realtime
        array slice:    30.956 ns       673x realtime
        whole array:    23.018 ns       905x realtime

Buffer size: 32 samples
        sized vector:   31.301 ns       666x realtime
        array slice:    30.511 ns       683x realtime
        whole array:    22.626 ns       921x realtime

Buffer size: 64 samples
        sized vector:   31.985 ns       651x realtime
        array slice:    30.409 ns       685x realtime
        whole array:    23.050 ns       904x realtime

Buffer size: 128 samples
        sized vector:   30.982 ns       672x realtime
        array slice:    30.178 ns       690x realtime
        whole array:    22.971 ns       907x realtime

Buffer size: 256 samples
        sized vector:   31.275 ns       666x realtime
        array slice:    32.546 ns       640x realtime
        whole array:    22.596 ns       922x realtime

Buffer size: 512 samples
        sized vector:   30.313 ns       687x realtime
        array slice:    30.218 ns       689x realtime
        whole array:    23.244 ns       896x realtime

Buffer size: 1024 samples
        sized vector:   30.576 ns       681x realtime
        array slice:    29.634 ns       703x realtime
        whole array:    22.906 ns       910x realtime

Buffer size: 2048 samples
        sized vector:   30.497 ns       683x realtime
        array slice:    29.653 ns       703x realtime
        whole array:    22.847 ns       912x realtime

Buffer size: 4096 samples
        sized vector:   30.538 ns       682x realtime
        array slice:    31.393 ns       664x realtime
        whole array:    24.637 ns       846x realtime
~~~
