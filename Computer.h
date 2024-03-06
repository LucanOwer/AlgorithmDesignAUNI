#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Rock.h"

class Computer : public Player{
private:
    std::string name;

public:
    Computer(const std::string& name);

    virtual std::string getName() const override;
    virtual Move* makeMove() override;
};

#endif
