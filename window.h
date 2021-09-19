#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <stdio.h>

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;
/* initialize instance */
int init_instance(SDL_Instance *);

/* draw functions */
void draw_stuff(SDL_Instance instance);


#endif
