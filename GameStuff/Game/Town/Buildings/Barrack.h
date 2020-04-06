#ifndef GAME_BARRACK_H
#define GAME_BARRACK_H

#include "Building.h"

class Barrack: public Building {
public:
    bool build = false;
    Barrack() {
        cost = 300;
    }
};

#endif
