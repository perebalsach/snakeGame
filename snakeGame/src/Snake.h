#ifndef SNAKE_H
#define SNAKE_H

#include <SFML/Graphics.hpp>
#include "Window.h"
#include <iostream>


class Snake {
public:
	Snake();

	void Input();
	void Update();
	void Render();

	sf::Sprite GetSprite();

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

private:
	sf::Sprite m_Sprite;
	sf::Texture m_Texture;
};

#endif
