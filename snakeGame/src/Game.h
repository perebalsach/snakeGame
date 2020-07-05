#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Snake.h"

class Game {
public:
    Game();
    void Input();
    void Update();
    void Render();

    void CalculateDelta();
    bool IsRunning();

private:
    bool m_IsRunning;
    float m_deltaTime;

    Window m_Window;
    sf::Clock m_Clock;
    
    Snake m_Snake;
};

#endif