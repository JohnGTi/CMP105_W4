#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
private:
	//Attributes:
	float kerchow = 400.f;
	sf::RenderWindow* winDoe;

public:
	//Functions:
	Background();
	~Background();

	void receiveWin(sf::RenderWindow* hwnd);
	void update(float dt);
};

