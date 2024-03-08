#ifndef COMPUTER_H
#define COMPUTER_H
#include "Move.h"
#include "Player.h"

class Computer : public Player {
public:
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif
