#include "Game.h"

Game::Game() : m_Window("Snake Game"){
    m_IsRunning = true;
}

void Game::Input() {
}

void Game::Update() {
}

void Game::Render() {
}

bool Game::IsRunning() {
    if (!m_IsRunning) {
        return false;
    }
    return true;
    
}
