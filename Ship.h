#pragma once
#include "Texture.h"
#include "Vector2.h"

class Ship
{
public:
	//Constructor
	Ship();

	//Destructor
	~Ship();

	//Manejo de eventos
	void event(SDL_Event* e);

	//Selecci�n
	void select();
	void deselect();

	//Movimiento
	void move();
	void stop();
	bool moveTo(int x, int y);

	//Renderizado
	void render(SDL_Renderer* renderer);

	//Posici�n
	Vector2 GetPos();
	void SetPos(float x, float y);

	//Velocidad
	Vector2 GetVel();
	void SetVel(float x, float y);

	//Direcci�n
	Vector2 GetDir();
	void SetDir(float x, float y);

	//Centro
	Vector2 GetCen();
	void SetCen(float x, float y);

	Texture tex;

private:
	float max_vel;
	float angle;

	Vector2 pos;
	Vector2 vel;
	Vector2 dir;
	Vector2 cen;
	Vector2 dest;

	bool sel;
	float sel_radius;
	Texture sel_circle;
};