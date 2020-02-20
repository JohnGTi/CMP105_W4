#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:
	//Functions:
	void handleInput(float dt);

	Player();
	~Player();
};

