using namespace std;
#include "Human.h"
#include <iostream>

Human::Human(const string& playerName) : name(playerName) {}

char Human::makeMove(){
    char move;
    cout << "Enter move: "; cin >> move;
    return move;
}

string Human::getName() const {
    return name;
}
