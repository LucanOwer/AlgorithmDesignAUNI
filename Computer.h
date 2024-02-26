#ifndef COMPUTER_H
#define COMPUTER_H
using namespace std;
#include "Player.h"

class Computer : public Player {
public:
    char makeMove() override;
    string getName() const override;
};
 #endif