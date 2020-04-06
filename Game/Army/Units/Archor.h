#ifndef GAME_ARCHOR_H
#define GAME_ARCHOR_H

#include "Unit.h"
class Archer: public Unit {
public:
    virtual ~Archer() = default;
};

class RussianArcher: public Archer {
public:
    RussianArcher() {
        cost = 25;
        started_health = 120;
        damage = 25;
        type_attack = 3;
    }
};

class TurkishArcher: public Archer {
public:
    TurkishArcher() {
        cost = 60;
        started_health = 120;
        damage = 30;
        type_attack = 3;
    }
};
#endif
