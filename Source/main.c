#include "stdio.h"
#include "SDL.h"
const int WIN_WIDTH = 640;
const int WIN_HEIGHT = 400;

int main (int argc, char* args[])
{
  SDL_Window* window = NULL;

  SDL_Surface* surface = NULL;
  int INPUT;

  if (SDL_Init (SDL_INIT_VIDEO) < 0)
  {
      printf ("SDL did't work ERROR:%s\n",SDL_GetError());
      return -1;
  };
  window = SDL_CreateWindow("WINDOW_TITLE",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,WIN_WIDTH,WIN_HEIGHT,SDL_WINDOW_SHOWN);
  if (window == NULL)
  {
    printf ("SDL_CreateWindow did't work ERROR:%s\n",SDL_GetError());
  };
  
  scanf("%d",&INPUT);
  printf ("SDL Working\n");
  return 0;
};
