//qSLC. Compiled with gcc qSLC.c -o qSLC -lSDL2

#include 	<stdio.h>
#include	<SDL2/SDL.h>
#include 	<stdbool.h>


#define		SCREEN_WIDTH 	400
#define 	SCREEN_HEIGHT	200

int main (int argc, const char * argv[])
{
    //Move these to a more local scope when available
    int tickspeed = 100;
    float ticktime = 0;
      
    //Check our runmode. Are we running qSLC in Direct Mode (-d/--direct) or in Sequenced Mode (-s [FILE]/--sequenced [FILE])?
    
    printf("Initialising SDL...");
    
    //Initialise SDL2
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0)
    {
        SDL_Log("SDL Init failed; %s", SDL_GetError());
        return 1;
    }
    else
    {
        printf("OK.\nCreating Window... ");
        SDL_Window* window = NULL;
        
        if((window = SDL_CreateWindow("Quake's Scriptable Logic Circuit", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN)) != NULL)
            {
                printf("OK.\nCreating Renderer...");
                SDL_Renderer* renderer = NULL;
                renderer = SDL_CreateRenderer(window, -1, 0);
                
                //-----TODO-----
                //Create the main rendering loop here
                //Determine our Runmode and use input as needed
            }
        else
            {
                printf("Failed; %s", SDL_GetError());
                return 1;
            }
    }    
    
    return 0;
}