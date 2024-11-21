#include "Game.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

Game::Game() : currentPlayer(0) {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // Random seed
    board = new Board(30); // Create a board with 30 tiles
    int numPlayers;
    std::cout << "Enter the number of players: ";
    std::cin >> numPlayers;
    for (int i = 0; i < numPlayers; ++i) {
        std::string name;
        std::cout << "Enter name for Player " << i + 1 << ": ";
        std::cin >> name;
        players.push_back(new Player(name));
    }
}

Game::~Game() {
    delete board;
    for (auto player : players) {
        delete player;
    }
}

void Game::rollDice() {
    int dice = std::rand() % 6 + 1;
    std::cout << players[currentPlayer]->getName() << " rolls a " << dice << "!\n";
    players[currentPlayer]->moveForward(dice);
}

void Game::applyTileEffect(int playerIndex) {
    int tileType = board->getTileType(players[playerIndex]->getPosition());
    switch (tileType) {
        case 1:
            std::cout << "Speed boost! Move forward 3 spaces.\n";
            players[playerIndex]->moveForward(3);
            break;
        case 2:
            std::cout << "Reverse! Move back 2 spaces.\n";
            players[playerIndex]->moveBackward(2);
            break;
        case 3:
            std::cout << "Stop for one turn.\n";
            players[playerIndex]->stopForTurns(1);
            break;
        default:
            std::cout << "Nothing happens.\n";
            break;
    }
}

void Game::saveGame() {
    std::ofstream file("save/savefile.txt");
    if (file.is_open()) {
        board->serialize(file);
        for (const auto& player : players) {
            player->serialize(file);
        }
        file << currentPlayer << "\n";
        file.close();
        std::cout << "Game saved successfully.\n";
    } else {
        std::cout << "Error saving game.\n";
    }
}

void Game::loadGame() {
    std::ifstream file("save/savefile.txt");
    if (file.is_open()) {
        board->deserialize(file);
        for (auto& player : players) {
            player->deserialize(file);
        }
        file >> currentPlayer;
        file.close();
        std::cout << "Game loaded successfully.\n";
    } else {
        std::cout << "Error loading game.\n";
    }
}

void Game::displayBoard() const {
    board->display(players);
}

void Game::start() {
    while (true) {
        displayBoard();
        rollDice();
        applyTileEffect(currentPlayer);

        if (players[currentPlayer]->getPosition() >= board->getSize()) {
            std::cout << players[currentPlayer]->getName() << " wins!\n";
            break;
        }

        currentPlayer = (currentPlayer + 1) % players.size();
    }
}
