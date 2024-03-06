#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual std::string getName() const = 0;
    virtual Move* makeMove() = 0;
};

#endif