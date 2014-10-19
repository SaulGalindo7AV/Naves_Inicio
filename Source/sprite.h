
#ifndef _SPRITE_H_
#define _SPRITE_H_

#include <SDL.h>
#include "SpriteDef.h"

class Sprite 
{
	SDL_Surface * image;
	SDL_Surface * screen;
	SpriteDef spriteDef;
	
public:
	void CargarImagen(char * ruta);
	void PintarModulo(int nombre, int x, int y);
	SDL_Rect src;
	Sprite(SDL_Surface * screen);
	~Sprite();
	Sprite::Sprite (SDL_Surface);
	
	this->screen=screen;
	int WidthModule(int id);
	int HeightModule(int id);
	
};
#endif