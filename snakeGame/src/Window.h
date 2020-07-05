#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


class Window
{
public:
	Window(const std::string& windowTitle);
	~Window();

	void Input();
	void Draw(std::vector<sf::Sprite>* sprites);
	void Clear();

	bool MoveUp();
	bool MoveDown();
	bool MoveLeft();
	bool MoveRight();

	const bool IsOpen() const;

private:
	sf::RenderWindow* m_Window;
	bool m_MoveUp;
	bool m_MoveDown;
	bool m_MoveLeft;
	bool m_MoveRight;

};

#endif // !WINDOW_H

