#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main() {
    
    Human nahidwin("Nah I'd Win"); // Creates the goat
    Computer daniel; // Creates daniel
    Referee referee;
    Player* winner = referee.refGame(&nahidwin, &daniel);

    if (winner == nullptr) {
        cout << "It's a Tie. AND THATS A FUCKING LOSS.\n";
    } else {
        cout << winner->getName() << " wins. of course he's just built different.\n";
    }

    return 0;
}
