#!/bin/bash
gcc *.c *.h `sdl2-config --cflags` `sdl2-config --libs` -lSDL2_ttf -o raise
./raise
