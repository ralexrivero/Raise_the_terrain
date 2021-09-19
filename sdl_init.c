#include "draw.h"

int main(void)
{
	SDL_Window *window;
	SDL_Renderer *renderer;

	/* Initilize SDL */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		frintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
		return (1);
	}

	return (0);
}
