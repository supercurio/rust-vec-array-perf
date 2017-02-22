# Nexus 5X (Snapdragon 808, Cortex A57, 1.8 GHz)
## aarch64

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   15.251 ns       1366x realtime
        array slice:    14.356 ns       1451x realtime
        whole array:    8.141 ns        2559x realtime

Buffer size: 16 samples
        sized vector:   15.003 ns       1389x realtime
        array slice:    15.311 ns       1361x realtime
        whole array:    10.494 ns       1985x realtime

Buffer size: 32 samples
        sized vector:   14.675 ns       1420x realtime
        array slice:    15.117 ns       1378x realtime
        whole array:    10.480 ns       1988x realtime

Buffer size: 64 samples
        sized vector:   14.513 ns       1435x realtime
        array slice:    14.992 ns       1390x realtime
        whole array:    10.480 ns       1988x realtime

Buffer size: 128 samples
        sized vector:   14.435 ns       1443x realtime
        array slice:    14.940 ns       1394x realtime
        whole array:    10.487 ns       1986x realtime

Buffer size: 256 samples
        sized vector:   14.410 ns       1446x realtime
        array slice:    14.908 ns       1397x realtime
        whole array:    10.490 ns       1986x realtime

Buffer size: 512 samples
        sized vector:   14.405 ns       1446x realtime
        array slice:    14.934 ns       1395x realtime
        whole array:    10.486 ns       1987x realtime

Buffer size: 1024 samples
        sized vector:   14.442 ns       1443x realtime
        array slice:    14.835 ns       1404x realtime
        whole array:    10.488 ns       1986x realtime

Buffer size: 2048 samples
        sized vector:   14.446 ns       1442x realtime
        array slice:    14.791 ns       1409x realtime
        whole array:    10.489 ns       1986x realtime

Buffer size: 4096 samples
        sized vector:   14.423 ns       1444x realtime
        array slice:    14.947 ns       1394x realtime
        whole array:    10.489 ns       1986x realtime
~~~

## armv7

### Rust Vector and Array performance comparison
#### rust 1.15.1

~~~
Buffer size: 8 samples
        sized vector:   12.777 ns       1630x realtime
        array slice:    11.128 ns       1872x realtime
        whole array:    5.088 ns        4094x realtime

Buffer size: 16 samples
        sized vector:   11.741 ns       1774x realtime
        array slice:    11.814 ns       1763x realtime
        whole array:    9.254 ns        2251x realtime

Buffer size: 32 samples
        sized vector:   11.670 ns       1785x realtime
        array slice:    11.576 ns       1800x realtime
        whole array:    9.282 ns        2244x realtime

Buffer size: 64 samples
        sized vector:   11.614 ns       1794x realtime
        array slice:    11.447 ns       1820x realtime
        whole array:    9.337 ns        2231x realtime

Buffer size: 128 samples
        sized vector:   11.597 ns       1797x realtime
        array slice:    11.382 ns       1830x realtime
        whole array:    9.366 ns        2224x realtime

Buffer size: 256 samples
        sized vector:   11.541 ns       1805x realtime
        array slice:    11.364 ns       1833x realtime
        whole array:    9.383 ns        2220x realtime

Buffer size: 512 samples
        sized vector:   11.580 ns       1799x realtime
        array slice:    11.312 ns       1842x realtime
        whole array:    9.388 ns        2219x realtime

Buffer size: 1024 samples
        sized vector:   11.535 ns       1806x realtime
        array slice:    11.282 ns       1847x realtime
        whole array:    9.390 ns        2219x realtime

Buffer size: 2048 samples
        sized vector:   10.979 ns       1898x realtime
        array slice:    11.175 ns       1864x realtime
        whole array:    9.398 ns        2217x realtime

Buffer size: 4096 samples
        sized vector:   10.980 ns       1897x realtime
        array slice:    11.145 ns       1869x realtime
        whole array:    9.395 ns        2218x realtime
~~~
