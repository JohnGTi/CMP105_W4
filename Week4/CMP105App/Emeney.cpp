#include "Emeney.h"
#include "Level.h"

void Emeney::passWindow(sf::RenderWindow* win)
{
	winDoe = win;
}

void Emeney::update(float dt)
{
	sf::Vector2u pos = winDoe->getSize(); //Get the size of the window.
	sf::Vector2f dospos = currentSprite.getPosition();

	if (dospos.y <= 0) { dirY = 1; }
	else if (dospos.x >= (pos.x - 50)) { dirX = -1; }
	else if (dospos.y >= (pos.y - 50)) { dirY = -1; }
	else if (dospos.x <= 0) { dirX = 1; }


	//Update/move goumbah
	currentSprite.move(dirX * kerchow * dt, dirY * kerchow * dt);
}

Emeney::Emeney()
{

}

Emeney::~Emeney()
{

}
