#ifndef GAME_SPEAR_H
#define GAME_SPEAR_H

#include "Unit.h"
class Spear: public Unit {
public:
    virtual ~Spear() = default;
};

class RussianSpear: public Spear {
public:
    RussianSpear() {
        cost = 30;
        started_health = 150;
        pike_protection = 2;
        sword_protection = 2;
        arrow_protection = 15;
        damage = 10;
        type_attack = 1;
    }
};

class TurkishSpear: public Spear {
public:
    TurkishSpear() {
        cost = 40;
        started_health = 150;
        pike_protection = 2;
        sword_protection = 2;
        arrow_protection = 15;
        damage = 10;
        type_attack = 1;
    }
};
#endif
