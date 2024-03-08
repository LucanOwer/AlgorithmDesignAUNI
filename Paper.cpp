#include "Paper.h"
#include "Rock.h"
#include <typeinfo>

std::string Paper::getName() const {
    return "Paper";
}

bool Paper::winsAgainst(const Move& opponent) const {
    return typeid(opponent) == typeid(Rock);
}
