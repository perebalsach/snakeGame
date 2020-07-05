#include "Snake.h"

Snake::Snake() {
	if (!m_Texture.loadFromFile("./res/textures/snake.png")) {
		std::cout << "Error loading the snake texture" << std::endl;
	}
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setPosition(400, 400);
}

void Snake::Input() {
}

void Snake::Update() {
}

void Snake::Render() {

}

sf::Sprite Snake::GetSprite() {
	return m_Sprite;
}

void Snake::MoveLeft() {
}

void Snake::MoveRight() {
}

void Snake::MoveUp() {
}

void Snake::MoveDown() {
}
