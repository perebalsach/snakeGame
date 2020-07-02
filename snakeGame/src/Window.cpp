#include "Window.h"

Window::Window(const std::string& windowTitle)
    : m_Window(sf::VideoMode(800, 600), windowTitle, sf::Style::Titlebar)
{
    m_Window.setVerticalSyncEnabled(true);
    m_Window.clear(sf::Color::Blue);
}

void Window::Update() {
    sf::Event m_Event;
    while (m_Window.pollEvent(m_Event))
    {
        if (m_Event.type == sf::Event::Closed)
            m_Window.close();
    }
}

void Window::Draw() {
    m_Window.clear(sf::Color::Blue);
    m_Window.display();
}

bool Window::IsOpen() {
    return m_Window.isOpen();
}
