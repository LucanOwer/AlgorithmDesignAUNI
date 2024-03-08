#include "Computer.h"
#include "Rock.h" 

Move* Computer::makeMove() const {
    return new Rock(); // Computer always plays Rock
}

std::string Computer::getName() const {
    return "Computer";
}
