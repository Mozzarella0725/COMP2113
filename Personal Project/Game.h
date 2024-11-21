#ifndef GAME_H
#define GAME_H

#include <string>
#include "Player.h"

class Game {
private:
    Player* player; // Dynamic memory management
    void displayMenu();
    void saveGame();
    void loadGame();
    void randomEvent();

public:
    Game();
    ~Game();
    void run();
};

#endif
