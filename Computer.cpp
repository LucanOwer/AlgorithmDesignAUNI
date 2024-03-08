#include "Computer.h"
#include "Ninja.h" 

Move* Computer::makeMove() const {
    return new Ninja(); // Computer always plays Ninja
}

std::string Computer::getName() const {
    return "Computer";
}
