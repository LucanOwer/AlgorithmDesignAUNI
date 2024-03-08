#include "Scissors.h"
#include "Paper.h" 
#include <typeinfo>

std::string Scissors::getName() const {
    return "Scissors";
}

bool Scissors::winsAgainst(const Move& opponent) const {
    return typeid(opponent) == typeid(Paper);
}
