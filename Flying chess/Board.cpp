#include "Board.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>

Board::Board(int size) {
    tiles.resize(size);
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < size; ++i) {
        tiles[i] = std::rand() % 4; // Randomly assign tile types (0: normal, 1: boost, 2: reverse, 3: stop)
    }
}

int Board::getTileType(int position) const {
    if (position < 0 || position >= tiles.size()) return 0;
    return tiles[position];
}

int Board::getSize() const {
    return tiles.size();
}

void Board::display(const std::vector<Player*>& players) const {
    for (int i = 0; i < tiles.size(); ++i) {
        bool playerHere = false;
        for (const auto& player : players) {
            if (player->getPosition() == i) {
                std::cout << "[" << player->getName().at(0) << "]"; // Display player's initial
                playerHere = true;
                break;
            }
        }
        if (!playerHere) {
            std::cout << "[ ]";
        }
    }
    std::cout << "\n";
}

void Board::serialize(std::ostream& os) const {
    for (const auto& tile : tiles) {
        os << tile << " ";
    }
    os << "\n";
}

void Board::deserialize(std::istream& is) {
    for (auto& tile : tiles) {
        is >> tile;
    }
}
