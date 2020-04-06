#ifndef GAME_TOWERS_H
#define GAME_TOWERS_H

#include "Building.h"
class Towers: public Building {
public:
    int cnt = 0;
    int damage;
    Towers() {
        cost = 200;
        damage = 100;
    }
};
#endif
