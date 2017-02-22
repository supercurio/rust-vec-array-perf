# Nexus 9 (NVIDIA Tegra K1, Denver 64-bit CPU, 2.5 GHz)
## aarch64

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   7.757 ns        2686x realtime
        array slice:    6.925 ns        3009x realtime
        whole array:    3.957 ns        5265x realtime

Buffer size: 16 samples
        sized vector:   6.233 ns        3342x realtime
        array slice:    6.170 ns        3376x realtime
        whole array:    7.171 ns        2905x realtime

Buffer size: 32 samples
        sized vector:   5.881 ns        3542x realtime
        array slice:    5.849 ns        3562x realtime
        whole array:    6.259 ns        3329x realtime

Buffer size: 64 samples
        sized vector:   5.744 ns        3627x realtime
        array slice:    5.716 ns        3645x realtime
        whole array:    5.893 ns        3535x realtime

Buffer size: 128 samples
        sized vector:   5.598 ns        3721x realtime
        array slice:    5.647 ns        3690x realtime
        whole array:    5.733 ns        3634x realtime

Buffer size: 256 samples
        sized vector:   5.525 ns        3771x realtime
        array slice:    5.583 ns        3732x realtime
        whole array:    5.630 ns        3701x realtime

Buffer size: 512 samples
        sized vector:   5.648 ns        3689x realtime
        array slice:    5.548 ns        3755x realtime
        whole array:    5.579 ns        3734x realtime

Buffer size: 1024 samples
        sized vector:   5.488 ns        3796x realtime
        array slice:    5.538 ns        3762x realtime
        whole array:    5.519 ns        3775x realtime

Buffer size: 2048 samples
        sized vector:   5.478 ns        3803x realtime
        array slice:    5.535 ns        3764x realtime
        whole array:    5.539 ns        3761x realtime

Buffer size: 4096 samples
        sized vector:   5.468 ns        3810x realtime
        array slice:    8.126 ns        2564x realtime
        whole array:    5.469 ns        3809x realtime
~~~

## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   7.921 ns        2630x realtime
        array slice:    6.984 ns        2983x realtime
        whole array:    4.259 ns        4892x realtime

Buffer size: 16 samples
        sized vector:   6.831 ns        3050x realtime
        array slice:    6.537 ns        3187x realtime
        whole array:    7.372 ns        2826x realtime

Buffer size: 32 samples
        sized vector:   6.633 ns        3141x realtime
        array slice:    6.482 ns        3214x realtime
        whole array:    6.713 ns        3104x realtime

Buffer size: 64 samples
        sized vector:   6.384 ns        3264x realtime
        array slice:    6.270 ns        3323x realtime
        whole array:    6.341 ns        3285x realtime

Buffer size: 128 samples
        sized vector:   6.261 ns        3327x realtime
        array slice:    6.159 ns        3383x realtime
        whole array:    6.441 ns        3234x realtime

Buffer size: 256 samples
        sized vector:   6.206 ns        3357x realtime
        array slice:    6.107 ns        3412x realtime
        whole array:    6.310 ns        3302x realtime

Buffer size: 512 samples
        sized vector:   6.520 ns        3195x realtime
        array slice:    6.088 ns        3422x realtime
        whole array:    6.219 ns        3350x realtime

Buffer size: 1024 samples
        sized vector:   6.346 ns        3283x realtime
        array slice:    6.043 ns        3447x realtime
        whole array:    6.122 ns        3403x realtime

Buffer size: 2048 samples
        sized vector:   6.352 ns        3280x realtime
        array slice:    6.018 ns        3462x realtime
        whole array:    6.279 ns        3318x realtime

Buffer size: 4096 samples
        sized vector:   6.340 ns        3286x realtime
        array slice:    6.790 ns        3068x realtime
        whole array:    6.147 ns        3389x realtime
~~~
