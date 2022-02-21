README
======

# Build

`gcc -std=c99 -g -o hcs hack_me.c -z execstack -fno-stack-protector`

## Disable Address Space Layout Randomization (ASLR)

Only disable ASLR on a virtual machine deployed for playing this game. Never disable ASLR on production systems or your personal machine.

`sudo sh -c "echo 0 > /proc/sys/kernel/randomize_va_space"`
