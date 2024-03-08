#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
public:
    std::string getName() const override;
    bool winsAgainst(const Move& opponent) const override;
};

#endif
