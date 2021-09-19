#!/bin/bash
gcc *.c `sdl2-config --cflags` `sdl2-config --libs` -lSDL2_ttf