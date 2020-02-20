#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/MushroomTrans.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	cursorImg.loadFromFile("gfx/icon.png");

	// Moise Coisur.
	moiseCoisur.setTexture(&cursorImg);
	moiseCoisur.setSize(sf::Vector2f(48, 48));
	moiseCoisur.setPosition(300, 300);

	//window->setMouseCursorVisible(false);
	moiseCoisur.setInput(input);

	// Noite Moise Coisur.
	bgArt.loadFromFile("gfx/Level1_1.png");

	levelBackground.setTexture(&bgArt);
	levelBackground.setSize(sf::Vector2f(11038, 675));
	levelBackground.setPosition(-9838, 0);
	//9838

	levelBackground.setInput(input);
	levelBackground.receiveWin(window);
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

}

// Update game objects
void Level::update(float dt)
{
	moiseCoisur.update(dt);
	levelBackground.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	//window->draw(moiseCoisur);
	window->draw(levelBackground);

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