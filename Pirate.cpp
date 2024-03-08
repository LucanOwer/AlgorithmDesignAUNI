#include "Pirate.h"
#include "Monkey.h" 
#include "Robot.h" 
#include <typeinfo>

std::string Pirate::getName() const {
    return "Pirate";
}

bool Pirate::winsAgainst(const Move& opponent) const {
    // Pirate wins against Monkey and Robot
    if (typeid(opponent) == typeid(Monkey) || typeid(opponent) == typeid(Robot)) {
        return true;
    } else {
        return false;
    }
}
