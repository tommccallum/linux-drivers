#!/bin/bash

if [ $EUID -ne 0 ]; then
    echo "Please run as root using sudo e.g. sudo ./test.sh"
    exit 1
fi

echo "Loading module"
insmod helloworld.ko      # Load the hello.ko module into the kernel
echo "Listing module"
lsmod | grep helloworld
echo "Removing module"
rmmod helloworld          # Remove the hello module from the kernel
echo "Driver output can be found in the kernel logs using dmesg"
dmesg | tail -n 2 | grep MyFirstDriver