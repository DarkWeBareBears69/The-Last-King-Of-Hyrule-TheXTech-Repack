#!/bin/bash

gcc exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui-linux-x86_64
gcc -m32 -mno-mmx -mno-3dnow -mno-sse -mno-sse2 -mno-sse3 -mno-ssse3 exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui-linux-i686
# sudo apt install gcc-aarch64-linux-gnu g++-aarch64-linux-gnu
aarch64-linux-gnu-gcc exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui-linux-aarch64
# sudo apt install gcc-arm-linux-gnueabi g++-arm-linux-gnueabi gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf
arm-linux-gnueabi-gcc exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui-linux-armem
arm-linux-gnueabihf-gcc exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui-linux-armhf

i686-w64-mingw32-gcc exe2ui.c -static -static-libgcc -O3 -no-pie -o exe2ui.exe
