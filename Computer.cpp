#include "Computer.h"


Computer::Computer(const std::string& name) : name(name) {}

std::string Computer::getName() const {
    return name;
}

Move* Computer::makeMove() {
    // Computer always picks rock
    return new Rock();
}
