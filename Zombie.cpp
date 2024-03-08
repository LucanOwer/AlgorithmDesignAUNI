#include "Zombie.h" 
#include "Pirate.h" 
#include "Monkey.h" 
#include <typeinfo>

std::string Zombie::getName() const {
    return "Zombie";
}

bool Zombie::winsAgainst(const Move& opponent) const {
    // Zombie wins against Pirate and Monkey
    if (typeid(opponent) == typeid(Pirate) || typeid(opponent) == typeid(Monkey)) {
        return true;
    } else {
        return false;
    }
}
