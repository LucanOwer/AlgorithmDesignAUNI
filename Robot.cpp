#include "Robot.h"
#include "Ninja.h" 
#include "Zombie.h" 
#include <typeinfo>

std::string Robot::getName() const {
    return "Robot";
}

bool Robot::winsAgainst(const Move& opponent) const {
    // Robot wins against Ninja and Zombie
    if (typeid(opponent) == typeid(Ninja) || typeid(opponent) == typeid(Zombie)) {
        return true;
    } else {
        return false;
    }
}
