#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"

int main() {

    Game game;
    while (game.IsRunning()) {
        game.Input();
        game.Update();
        game.Render();
        game.CalculateDelta();
    }
    return 0;
}
