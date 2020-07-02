#ifndef GAME_H
#define GAME_H

class Game {
public:
    void Input();
    void Update();
    void Render();
    
    bool IsRunning();
}

#endif //GAME_H