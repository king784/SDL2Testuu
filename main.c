#include <SDL.h>
#include <stdio.h>

const int SCREENWIDTH = 640;
const int SCREENHEIGHT = 480;

int main(int argc, char* args[])
{
    SDL_Window* window = NULL;

    SDL_Surface* screenSurface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Init failed!");
    }
    else
    {
        window = SDL_CreateWindow("AwesomeGame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREENWIDTH, SCREENHEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL)
        {
            printf("Window couldn't be created!!");
        }
        else
        {
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0x00));
            SDL_UpdateWindowSurface(window);
            SDL_Delay(5000);
        }
    }

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
    
}