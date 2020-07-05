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
	void Draw(std::vector<sf::Sprite> sprites);
	void Clear();

	const bool IsOpen() const;

private:
	sf::RenderWindow* m_Window;
};

#endif // !WINDOW_H

