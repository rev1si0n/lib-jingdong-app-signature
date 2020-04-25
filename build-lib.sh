#!/bin/bash

gcc -m64 libsign.c -O0 -shared -fPIC -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -Wno-pointer-sign -o libJDsign.so
