#ifndef __NAVE_H__
#define __NAVE_H__
#include "sprite.h"

class Nave
{
public:
	int x;
	int y;
	int w;
	int h;
	Sprite * sprite;
	public 
		Nave(SDL_Surface * screen, char * rutaImagen);
	~Nave();
	void Pintar();
	void Mover

private:

};

Nave::Nave()
{
}

Nave::~Nave()
{
}