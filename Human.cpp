#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>

Move* Human::makeMove() const {
    std::string moveName;
    std::cin >> moveName;


    if (moveName == "Rock")
        return new Rock();
    else if (moveName == "Paper")
        return new Paper();
    else if (moveName == "Scissors")
        return new Scissors();
    else if (moveName == "Monkey")
        return new Monkey();
    else if (moveName == "Robot")
        return new Robot();
    else if (moveName == "Pirate")
        return new Pirate();
    else if (moveName == "Ninja")
        return new Ninja();
    else if (moveName == "Zombie")
        return new Zombie();
    else{
        std::cerr << "Invalid move!" << std::endl;
        return nullptr;
    }
}

std::string Human::getName() const {
    return name;
}
