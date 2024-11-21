#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int position;
    int stopTurns;

public:
    Player(const std::string& name);
    void moveForward(int steps);
    void moveBackward(int steps);
    void stopForTurns(int turns);
    int getPosition() const;
    const std::string& getName() const;
    void serialize(std::ostream& os) const;
    void deserialize(std::istream& is);
};

#endif
