#include "Nave.h"
#include "Config.h"


Nave::Nave(SDL_Surface * screen, char * rutaImagen)
{
	sprite = new Sprite(screen);
	sprite->CargarImagen(rutaImagen);
	w=sprite->WidthModule(0);
	h=sprite->HeightModule(0);
	x=(_WIDTH_SCREEN_/2)-(w/2);
	y=(_HEIGHT_SCREEN_-80)-(h);
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
int Nave::obtenerX()
{
	return x;
}
int Nave::obtenerY()
{
	return y;
}
int Nave::obtenerW()
{
	return w;
}