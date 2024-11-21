#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
private:
    std::vector<int> tiles; // Tile types (0: normal, 1: boost, 2: reverse, 3: stop)

public:
    Board(int size);
    int getTileType(int position) const;
    int getSize() const;
    void display(const std::vector<class Player*>& players) const;
    void serialize(std::ostream& os) const;
    void deserialize(std::istream& is);
};

#endif
