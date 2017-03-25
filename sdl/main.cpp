#include <iostream>

#include <SDL.h>

auto main() -> int
{
    std::cout << "this is SDL app skeleton" << std::endl;

    SDL_Init(SDL_INIT_EVERYTHING);

    const auto window = SDL_CreateWindow("SDL",
                                         SDL_WINDOWPOS_UNDEFINED,
                                         SDL_WINDOWPOS_UNDEFINED,
                                         800,
                                         600,
                                         SDL_WINDOW_SHOWN);

    const auto surface = SDL_GetWindowSurface(window);

    while (true)
    {
        // handle events

        SDL_Event e;
        SDL_PollEvent(&e);

        if (e.type == SDL_QUIT)
        {
            break;
        }

        // draw stuff

        SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
        SDL_UpdateWindowSurface(window);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}
