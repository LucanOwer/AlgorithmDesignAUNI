#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Create players
    Human humanPlayer;
    Computer computerPlayer;

    // Create referee
    Referee referee;

    // Referee the game
    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner == nullptr) {
        std::cout << "It's a tie!" << std::endl;
    } else {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    }

    return 0;
}
