#include <iostream>
#include <SFML/Graphics.hpp>

int main() {

    Game game;
    while(game.IsRunning()) {
        game.Input();
        game.Update();
        game.Render();
    }
    return 0;
}