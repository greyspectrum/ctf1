README
======

# Build

`gcc -std=c99 -g -o hcs hack_me.c -z execstack -fno-stack-protector`

## Disable Address Space Layout Randomization (ASLR)

`sudo sh -c "echo 0 > /proc/sys/kernel/randomize_va_space"`
