#include "Ninja.h"
#include "Pirate.h" 
#include "Zombie.h" 
#include <typeinfo>

std::string Ninja::getName() const {
    return "Ninja";
}

bool Ninja::winsAgainst(const Move& opponent) const {
    // Ninja wins against Pirate and Zombie
    if (typeid(opponent) == typeid(Pirate) || typeid(opponent) == typeid(Zombie)) {
        return true;
    } else {
        return false;
    }
}
