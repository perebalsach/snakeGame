#include "Game.h"

Game::Game() : m_Window("Snake") {
    m_deltaTime = m_Clock.restart().asSeconds();
    m_IsRunning = true;
}

void Game::Input() {
    m_Window.Input();

    if (m_Window.MoveUp()) {

    }
    if (m_Window.MoveDown()) {

    }
    if (m_Window.MoveLeft()) {

    }
    if (m_Window.MoveRight()) {

    }
}

void Game::Update() {

    m_Snake.Update();
}

void Game::Render() {
    m_Window.Clear();

    // Getting elements to render
    std::vector<sf::Sprite>* spriteList = new std::vector<sf::Sprite>;
    
    spriteList->push_back(m_Snake.GetSprite());
    // --------------------------

    // Draw all the elements
    m_Window.Draw(spriteList);
}

void Game::CalculateDelta() {
    m_deltaTime = m_Clock.restart().asSeconds();
}

bool Game::IsRunning() {
    if (!m_Window.IsOpen()) {
        return false;
    }
    return m_IsRunning;
}
