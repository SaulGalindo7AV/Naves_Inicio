#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
#include <SDL.h>
#include <SDL_image.h>
#include "config.h"

CGame::CGame(){
	estado=ESTADO_INICIANDO;

	atexit(SDL_Quit);
//	int estado = 0;				//este es un OR Binario sirve como un switch de dispositivos --->  | 
	//SDL_Surface * screen;
	

	if (SDL_Init(SDL_INIT_VIDEO)<0)
	
	{
		printf("Error: %s", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	screen=SDL_SetVideoMode(640,480,24, SDL_HWACCEL );

	if (screen == NULL)
	
	{
		printf("Error: %s", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	SDL_Flip(screen);
	SDL_WM_SetCaption("Mi primer Juego", NULL);
}
// Con esta función eliminaremos todos los elementos en pantalla
void CGame::Finalize()
{
	SDL_Quit();
		
	if (SDL_Init( SDL_INIT_VIDEO)){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);
		}
		
	screen = SDL_SetVideoMode( _HEIGHT_SCREEN_, _WIDTH_SCREEN_, 24, SDL_SWSURFACE );//original
			//screen=SDL_SetVideoMode (480, 640, 24, SDL_HWSURFACE);
			//screen=SDL_SetVideoMode (640, 480, 32, SDL_HWSURFACE);
			//screen=SDL_SetVideoMode (1024, 100,24, SDL_HWSURFACE);
			//screen=SDL_SetVideoMode (640, 480, 24, SDL_SWSURFACE);
			//screen=SDL_SetVideoMode (640, 480, 15, SDL_HWSURFACE);
		if (screen == NULL)
		{
			printf("Error %s ", SDL_GetError());
			exit(EXIT_FAILURE);

		}
			SDL_WM_SetCaption( "Mi primer Juego", NULL );

			nave = new Nave (screen,"../Data/Minave.bmp");
			SDL_Flip(screen);
}

bool CGame::Start()
{
	// Esta variable nos ayudara a controlar la salida del juego...
	int salirJuego = false;
          
	while (salirJuego == false)
	{
            
		//Maquina de estados
		switch (estado)
		{
		case Estado::ESTADO_INICIANDO:
			//{
				//nave = SDL_LoadBMP("../Data/MiNave.bmp");

				/*SDL_Rect fuente;
				fuente.x=90;
				fuente.y=152;
				fuente.w=242;
				fuente.h=76;
				SDL_Rect destino;
				destino.x=100;
				destino.y=100;
				destino.w=100;
				destino.h=100;

				SDL_BlitSurface(nave, &fuente, screen, &destino );
				SDL_BlitSurface(nave, NULL, screen, NULL);
				SDL_BlitSurface(nave, NULL,screen,NULL);

				SDL_FreeSurface(nave);
				
			}*/
			break;
				
		case Estado::ESTADO_MENU:
			//nave->Pintar();
			SDL_FillRect(screen, NULL, 0x000000);
			keys=SDL_GetKeyState(NULL);
			if(keys[SDLK_RIGHT])
			{
				nave->Mover(1);
			}
			nave->Pintar();
				break;
		case	Estado::ESTADO_JUGANDO:
				
		case Estado::ESTADO_TERMINANDO:
				break;
		case Estado::ESTADO_FINALIZANDO:
				
			break;
			}						

		
			SDL_Flip(screen);

    }	salirJuego=true;
	return true;
	
};
