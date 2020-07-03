#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Window.h"

class Game {
public:
    Game();
    void Input();
    void Update();
    void Render();

    bool IsRunning();

private:
    bool m_IsRunning;
    sf::RenderWindow m_Window;
};

#endif