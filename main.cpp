#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>


int main() {
    
    Human Gojo("Nah I'd Win"); // Creates the goat
    Computer Daniel; // Creates daniel
    Referee Referee;
    Player* winner = Referee.refGame(&Gojo, &Daniel);

    if (winner == nullptr) {
        std::cout << "It's a Tie. AND THATS A FUCKING LOSS.\n";
    } else {
        std::cout << winner->getName() << " . of course he's just built different.\n";
    }

    return 0;
}
