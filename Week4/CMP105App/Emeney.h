#pragma once
#include "Level.h"
#include "Framework/GameObject.h"

class Emeney : public GameObject
{
private:
	//Attributes:
	float kerchow = 200.f;
	int dirX = 1;
	int dirY = -1;
	sf::RenderWindow* winDoe;

public:
	//Functions:
	void passWindow(sf::RenderWindow* win);
	void update(float dt);

	Emeney();
	~Emeney();
};

