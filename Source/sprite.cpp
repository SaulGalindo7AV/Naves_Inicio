
#include "Sprite.h"
#include <SDL.h>

Sprite::~Sprite()
{
	SDL_FreeSurface(image);
}

void Sprite::PintarModulo(int id, int x, int y )
{
	SDL_Rect src;
	src.x = spriteDef.modulos[id].x;
	src.x = spriteDef.modulos[id].y;
	src.x = spriteDef.modulos[id].w;
	src.x = spriteDef.modulos[id].h;
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
