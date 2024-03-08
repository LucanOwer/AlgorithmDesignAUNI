#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"

class Human : public Player {
private:
    std::string name;
public:
    Human(const std::string& playerName = "Human");
    Move* makeMove() const override;
    std::string getName() const override;
};

#endif
