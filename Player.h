#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    public:
    virtual char makeMove() = 0; // virtual cause human/computer polymorphism
    virtual std::string getName() const = 0; //don't know why we need a name yet.
};

#endif