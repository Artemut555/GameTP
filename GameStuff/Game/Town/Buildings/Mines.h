#ifndef GAME_MINES_H
#define GAME_MINES_H

#include "Building.h"

class Mines: public Building {
public:
    int cnt = 0;
    int money_per_move;
    Mines() {
        cost = 100;
        money_per_move = 200;
    }
};

#endif
