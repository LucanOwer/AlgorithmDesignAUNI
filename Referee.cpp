#include "Referee.h"
#include <iostream>
using namespace std;

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if (move1 == move2)
        return nullptr; // Tie

    if ((move1 == 'R' && move2 == 'S') ||
        (move1 == 'S' && move2 == 'P') ||
        (move1 == 'G' && move2 == 'P') ||
        (move1 == 'G' && move2 == 'S') ||
        (move1 == 'G' && move2 == 'R') ||
        (move1 == 'P' && move2 == 'R')) {
        return player1;
    } else {
        return player2;
    }
}