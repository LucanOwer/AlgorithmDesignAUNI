#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
private:
    std::string name;

public:
    Human(const std::string& playerName = "Human");
    char makeMove() override;
    std::string getName() const override;
};
 #endif