#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    virtual std::string getType() const = 0;
    virtual bool moveLogic(const Move* opponent) const = 0;
};

#endif // MOVE_H