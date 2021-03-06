#include <SDL.h>
#include <SDL_image.h>
#include <SDL_image.h>
#include "Sprite.h"


class CGame
{
public:
	bool Start();
	static CGame instanceGame;

	CGame();
	void Finalize();

	enum Estado{
         ESTADO_INICIANDO,
         ESTADO_MENU,
         ESTADO_JUGANDO,
         ESTADO_TERMINANDO,
         ESTADO_FINALIZANDO
   };

private:
	void Iniciando();
	bool esLimitePantalla(nave * objeto, int bandera );
	SDL_Surface * screen;
	Sprite * nave;
	Estado estado;
};

