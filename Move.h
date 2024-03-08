#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual ~Move() {}
    virtual std::string getName() const = 0;
    virtual bool winsAgainst(const Move& opponent) const = 0;
};

#endif
