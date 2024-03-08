#include "Rock.h"
#include "Scissors.h" // Include the header for Scissors move
#include <typeinfo>

std::string Rock::getName() const {
    return "Rock";
}

bool Rock::winsAgainst(const Move& opponent) const {

    return typeid(opponent) == typeid(Scissors);
}
