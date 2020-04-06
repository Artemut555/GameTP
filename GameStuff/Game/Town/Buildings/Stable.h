#ifndef GAME_STABLE_H
#define GAME_STABLE_H

#include "Stable.h"
class Stable: public Building {
public:
    bool build = false;
    Stable() {
        cost = 300;
    }
};

#endif
