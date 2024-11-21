#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Board.h"
#include <vector>
#include <string>

class Game {
private:
    Board* board; // Dynamic memory management for the board
    std::vector<Player*> players; // Dynamic array of players
    int currentPlayer; // Index of the current player
    void rollDice();
    void applyTileEffect(int playerIndex);
    void saveGame();
    void loadGame();
    void displayBoard() const;

public:
    Game();
    ~Game();
    void start();
};

#endif
