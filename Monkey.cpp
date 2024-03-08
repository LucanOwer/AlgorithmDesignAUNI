#include "Monkey.h"
#include "Ninja.h" 
#include "Robot.h" 
#include <typeinfo>

std::string Monkey::getName() const {
    return "Monkey";
}

bool Monkey::winsAgainst(const Move& opponent) const {
    // Monkey wins against Ninja and Robot
    if (typeid(opponent) == typeid(Ninja) || typeid(opponent) == typeid(Robot)) {
        return true;
    } else {
        return false;
    }
}
