#pragma once
#include <string>
#include "Texture.h"
#include "ZonaPantalla.h"

//esta clase todavia esta en pa�ales, no hay que hacerle mucho caso

class Barra: public ZonaPantalla
{
	// name;
	Texture nombrejugador, opciones, recursos, energianum, oronum;


public:

	Barra(void);
	~Barra(void);

	void render();

	//void actRecursos();
	void renderRecursos();
	void setRecursos(std::stringstream recursos[]);

	//nombre del jugador
	void SetName(std::string nombre);
	void renderName();

	//void renderOpciones();

	int event(SDL_Event* e, SDL_Point xyrel);
};

