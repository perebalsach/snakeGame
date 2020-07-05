#include "Game.h"

Game::Game() : m_Window("Snake") {
    m_deltaTime = m_Clock.restart().asSeconds();
    m_IsRunning = true;
}

void Game::Input() {
    m_Window.Input();
}

void Game::Update() {

}

void Game::Render() {
    m_Window.Clear();
    std::vector<sf::Sprite> spriteList;
    spriteList.push_back(m_Snake.GetSprite());
    m_Window.Draw(spriteList);
    //m_Window.Draw();
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
