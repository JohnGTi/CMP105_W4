#include "Background.h"

Background::Background()
{
	
}

Background::~Background()
{

}

void Background::receiveWin(sf::RenderWindow* hwnd)
{
	winDoe = hwnd;
}

void Background::update(float dt)
{
	sf::Vector2f pos = getPosition();
	sf::Vector2f bgSize = getSize();
	sf::Vector2u winSize = winDoe->getSize(); //Get the size of the window.


	if (input->isKeyDown(sf::Keyboard::Left) == true && pos.x <= 0)
	{
		move(1 * kerchow * dt, 0);

	}
	if (input->isKeyDown(sf::Keyboard::Right) == true && pos.x >= -(bgSize.x - winSize.x))
	{
		move(-1 * kerchow * dt, 0);
	}
}
