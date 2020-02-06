#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::handleInput(float dt){

	if (input->isKeyDown(sf::Keyboard::Right))
	{ 
		velocity.x = 10;
		velocity.y = 0;
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		velocity.x = 10;
		velocity.y = 0;
		move(-velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		velocity.x = 0;
		velocity.y = 10;
		move(-velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		velocity.x = 0;
		velocity.y = 10;
		move(velocity * dt);
	}
}
