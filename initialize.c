#include "window.h"

int main(void)
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1);
	/* infinit loop */
	while ("C is awesome")
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		/* retrive events */
		if (poll_events() == 1)
			break;
		/* draw space */
		draw_stuff(instance);
		SDL_RenderPresent(instance.renderer);
	}
	return (0);
}
