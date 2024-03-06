#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
public:
    virtual std::string getName() const override { return "Scissors"; }
    virtual bool moveLogic(const Move* opponent) const override {
        return opponent->getName() == "Paper";
    }
};

#endif