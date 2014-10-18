#include "Nave.h"
#include "Config.h"


Nave::Nave(SDL_Surface * screen, char * rutaImagen)
{
	sprite = new Sprite(screen);
	sprite->CargarImagen(rutaImagen);
	x=(_WIDTH_SCREEN_/2)-(sprite->WidthModule(0)/2);
	y=(_HEIGHT_SCREEN_-80)-sprite->HeightModule(0));
}

Nave::~Nave()
{
	delete sprite();
}

void Nave::Pintar()
{
	sprite->PintarModulo(0,x,y);
}
void Nave::Mover(int posicion)
{
	x += posicion;
}