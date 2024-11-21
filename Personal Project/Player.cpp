#include "Player.h"
#include <sstream>

Player::Player() : name("Pilot"), health(100) {}

Player::Player(const std::string& name, int health) : name(name), health(health) {}

void Player::adjustHealth(int amount) {
    health += amount;
    if (health < 0) health = 0;
}

std::string Player::serialize() const {
    return name + "," + std::to_string(health);
}

void Player::deserialize(const std::string& data) {
    std::stringstream ss(data);
    getline(ss, name, ',');
    ss >> health;
}

int Player::getHealth() const {
    return health;
}
