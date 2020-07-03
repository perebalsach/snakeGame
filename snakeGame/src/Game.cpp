#include "Game.h"

Game::Game() : m_Window(sf::VideoMode(800, 600), "Snake Game"){
    m_IsRunning = true;
}

void Game::Input() {
    sf::Event event;
    while (m_Window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            m_IsRunning = false;
            m_Window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            m_IsRunning = false;
            m_Window.close();
        }
    }
}

void Game::Update() {
}

void Game::Render() {
    m_Window.clear(sf::Color::Blue);
    m_Window.display();
}

void Game::CalculateDelta() {
    m_deltaTime = m_Clock.restart().asSeconds();
}

bool Game::IsRunning() {
    if (!m_IsRunning) {
        return false;
    }
    return true;
    
}
