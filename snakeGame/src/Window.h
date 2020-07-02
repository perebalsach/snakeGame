#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>

class Window
{
public:
	Window(const std::string& windowTitle);

	void Update();
	void Draw();

	bool IsOpen();

private:
	sf::RenderWindow m_Window;
};

#endif // !WINDOW_H

