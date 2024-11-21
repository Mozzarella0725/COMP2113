#include "Player.h"

Player::Player(const std::string& name) : name(name), position(0), stopTurns(0) {}

void Player::moveForward(int steps) {
    if (stopTurns > 0) {
        --stopTurns;
        std::cout << name << " is stopped for " << stopTurns << " more turn(s).\n";
        return;
    }
    position += steps;
    std::cout << name << " moves to position " << position << ".\n";
}

void Player::moveBackward(int steps) {
    if (stopTurns > 0) {
        --stopTurns;
        return;
    }
    position -= steps;
    if (position < 0) position = 0;
    std::cout << name << " moves back to position " << position << ".\n";
}

void Player::stopForTurns(int turns) {
    stopTurns = turns;
}

int Player::getPosition() const {
    return position;
}

const std::string& Player::getName() const {
    return name;
}

void Player::serialize(std::ostream& os) const {
    os << name << " " << position << " " << stopTurns << "\n";
}

void Player::deserialize(std::istream& is) {
    is >> name >> position >> stopTurns;
}
