#ifndef HUMAN_H
#define HUMAN_H
using namespace std;
#include "Player.h"

class Human : public Player {
private:
    string name;

public:
    Human(const string& playerName = "Human");
    char makeMove() override;
    string getName() const override;
};
 #endif