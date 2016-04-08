#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class Mouse
{
public:
	Mouse();
	~Mouse();

	//Manejo de eventos
	void update(SDL_Event *e, SDL_Point xyrel);

	//Render de efectos
	void render(SDL_Renderer *renderer);
	//Selecci�n m�ltiple
	//void selection();

	//Devuelve selecci�n
	SDL_Rect getSel();

private:
	SDL_Point pos;
	SDL_Point press;
	SDL_Point release;

	SDL_Rect rect;
	bool active;
};

