#include "Human.h"
#include <iostream>


Human::Human(const std::string& name) : name(name) {}

std::string Human::getName() const {
    return name;
}

Move* Human::makeMove() {
    std::cout << "Enter your move (rock, paper, or scissors): ";
    std::string moveType;
    std::cin >> moveType;

    if (moveType == "rock") {
        return new Rock();
    } else if (moveType == "paper") {
        return new Paper();
    } else if (moveType == "scissors") {
        return new Scissors();
    } else {
        std::cout << "Invalid move. Please enter rock, paper, or scissors." << std::endl;
        return makeMove(); // Recursive call to prompt for a valid move
    }
}
