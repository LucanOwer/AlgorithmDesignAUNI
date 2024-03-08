#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"

class Human : public Player {
public:
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif
