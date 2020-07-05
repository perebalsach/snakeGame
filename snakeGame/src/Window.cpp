#include "Window.h"

Window::Window(const std::string& windowTitle) {
    m_Window = new sf::RenderWindow(sf::VideoMode(800, 600),
        windowTitle,
        sf::Style::Titlebar | 
        sf::Style::Close
    );

    m_Window->setFramerateLimit(60);
    m_Window->setVerticalSyncEnabled(true);
}

Window::~Window() {
    delete this->m_Window;
}

void Window::Input() {
    sf::Event event;
    while (m_Window->pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            this->m_Window->close();
            break;
        case sf::Event::KeyPressed:
            if (event.key.code == sf::Keyboard::Escape) {
                this->m_Window->close();
                break;
            }
        default:
            break;
        }
    }
}

void Window::Draw(std::vector<sf::Sprite> sprites) {
    for (auto const& sprite : sprites) {
        m_Window->draw(sprite);
    }
    m_Window->display();
}

void Window::Clear() {
    m_Window->clear(sf::Color::Black);
}

const bool Window::IsOpen() const {
    return m_Window->isOpen();
}
