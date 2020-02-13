#include "Level.h"
#include "Emeney.cpp"
#include "Emeney.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	testSprite.setInput(input);

	gompBahh.loadFromFile("gfx/Goomba.png");

	OOmpaLooMPa.setTexture(&gompBahh);
	OOmpaLooMPa.setSize(sf::Vector2f(100, 100));
	OOmpaLooMPa.setPosition(100, 100);
	OOmpaLooMPa.setVelocity(5, 5);
	OOmpaLooMPa.setInput(input);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	//now I dealt with level inputs, I want to deal with player specific inputs
	testSprite.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	OOmpaLooMPa.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(OOmpaLooMPa);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}