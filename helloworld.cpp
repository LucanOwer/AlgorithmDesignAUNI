#include <iostream>
using namespace std;

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string>


int main() {
    std::cout << "Hi";
    Human human("Gojo"); // Creates the goat
    Computer computer; // Creates daniel
    Referee referee;
    Player* winner = referee.refGame(&human, &computer);

    if (winner == nullptr) {
        std::cout << "It's a Tie. AND THATS A FUCKING LOSS.\n";
    } else {
        std::cout << winner->getName() << " . of course he's just built different.\n";
    }
    std::cout << "Hi";

    return 0;
}