#ifndef PLAYER_H
#define PLAYER_H
using namespace std;
#include <string>

class Player{
    public:
    virtual char makeMove() = 0; // virtual cause human/computer polymorphism
    virtual string getName() const = 0; //don't know why we need a name yet.
};

#endif