#!/bin/bash

clang exe2ui.c -osx_min_version=10.4 -arch x86_64 -arch arm64 -O3 -o exe2ui-mac
