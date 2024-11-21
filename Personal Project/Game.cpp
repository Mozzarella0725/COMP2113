#include "Game.h"
#include "Utilities.h"
#include <iostream>
#include <fstream>
#include <cstdlib> // For rand()
#include <ctime>

Game::Game() {
    player = new Player();
    std::srand(static_cast<unsigned>(std::time(nullptr))); // Initialize random seed
}

Game::~Game() {
    delete player;
}

void Game::displayMenu() {
    std::cout << "===== Airplane Adventure =====\n";
    std::cout << "1. Fly\n";
    std::cout << "2. Save Game\n";
    std::cout << "3. Load Game\n";
    std::cout << "4. Quit\n";
}

void Game::saveGame() {
    std::ofstream file("save/savefile.txt");
    if (file.is_open()) {
        file << player->serialize();
        file.close();
        std::cout << "Game saved successfully.\n";
    } else {
        std::cout << "Error saving game.\n";
    }
}

void Game::loadGame() {
    std::ifstream file("save/savefile.txt");
    if (file.is_open()) {
        std::string data;
        std::getline(file, data);
        player->deserialize(data);
        file.close();
        std::cout << "Game loaded successfully.\n";
    } else {
        std::cout << "Error loading game.\n";
    }
}

void Game::randomEvent() {
    int event = getRandomNumber(1, 3); // Random event generation
    if (event == 1) {
        std::cout << "A storm damages your plane!\n";
        player->adjustHealth(-20);
    } else if (event == 2) {
        std::cout << "You find a repair kit and fix your plane!\n";
        player->adjustHealth(10);
    } else {
        std::cout << "Clear skies ahead!\n";
    }
}

void Game::run() {
    int choice;
    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                randomEvent();
                break;
            case 2:
                saveGame();
                break;
            case 3:
                loadGame();
                break;
            case 4:
                std::cout << "Exiting game. Goodbye!\n";
                return;
            default:
                std::cout << "Invalid choice.\n";
        }
    }
}
