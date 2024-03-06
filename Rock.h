#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    virtual std::string getType() const override { return "Rock"; }
    virtual bool moveLogic(const Move* opponent) const override {
        return opponent->getType() == "Scissors";
    }
};

#endif // ROCK_H