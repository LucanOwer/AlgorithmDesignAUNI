
#include "Human.h"
#include <iostream>

Human::Human(const std::string& playerName) : name(playerName) {}

char Human::makeMove() {
    char move;
    std::cout << "Enter move: " << std::flush;
    std::cin >> move;
    return move;
}

std::string Human::getName() const {
    return name;
}
