#include "Referee.h"
#include <typeinfo> // Include the header for typeid

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) const {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1 == move2)
        return nullptr; // Tie

    if (move1->winsAgainst(*move2))
        return player1;
    else
        return player2;
}
