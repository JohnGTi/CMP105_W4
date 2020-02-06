#pragma once
#include "Framework/GameObject.h"

class Player : public GameObject
{
public:
	//Functions:
	Player();
	~Player();
	void handleInput(float dt);
};

