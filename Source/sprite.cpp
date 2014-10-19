
#include "Sprite.h"
#include <SDL.h>

Sprite::~Sprite()
{
	SDL_FreeSurface(image);
}

void Sprite:: CargarImagen(char * ruta)
{
	image = SDL_LoadBMP(ruta)
}


void Sprite::PintarModulo(int nombre, int x, int y )
{
	SDL_Rect src;
	src.x = spriteDef.modulos[nombre].x;
	src.x = spriteDef.modulos[nombre].y;
	src.x = spriteDef.modulos[nombre].w;
	src.x = spriteDef.modulos[nombre].h;
	SDL_Rect dest;
	dest.x = x;
	dest.y= y;
	SDL_BlitSurface(image, &src, screen, &dest);
}
	int Sprite::WidthModule(int id)
	{
		return spriteDef.modulos[id].w;
	}
	int Sprite::HeightModule(int id)
	{
		return spriteDef.modulos[id].h;
	}
