#include "Window.h"

Window::Window(const std::string& windowTitle) {
    m_Window = new sf::RenderWindow(sf::VideoMode(800, 600),
        windowTitle,
        sf::Style::Titlebar | 
        sf::Style::Close
    );

    m_Window->setFramerateLimit(60);
    m_Window->setVerticalSyncEnabled(true);

    m_MoveUp = false;
    m_MoveDown = false;
    m_MoveLeft = false;
    m_MoveRight = false;
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
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        m_MoveRight = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        m_MoveLeft = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        m_MoveUp = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        m_MoveDown = true;
    }
}

void Window::Draw(std::vector<sf::Sprite>* sprites) {
    // Renders all the sprites
    for (auto const& sprite : *sprites) {
        m_Window->draw(sprite);
    }
    m_Window->display();
}

void Window::Clear() {
    m_Window->clear(sf::Color::Black);
}

bool Window::MoveUp() {
    return m_MoveUp;
}

bool Window::MoveDown() {
    return m_MoveDown;
}

bool Window::MoveLeft() {
    return m_MoveLeft;
}

bool Window::MoveRight() {
    return m_MoveRight;
}

const bool Window::IsOpen() const {
    return m_Window->isOpen();
}
