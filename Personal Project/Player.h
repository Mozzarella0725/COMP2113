#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;

public:
    Player();
    Player(const std::string& name, int health);
    void adjustHealth(int amount);
    std::string serialize() const;
    void deserialize(const std::string& data);
    int getHealth() const;
};

#endif

