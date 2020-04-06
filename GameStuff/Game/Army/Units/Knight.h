#ifndef GAME_KNIGHT_H
#define GAME_KNIGHT_H

#include "Unit.h"
class Knight: public Unit {
public:
    virtual ~Knight() = default;
};

class RussianKnight: public Knight {
public:
    RussianKnight() {
        cost = 50;
        started_health = 380;
        pike_protection = 2;
        sword_protection = 4;
        arrow_protection = 17;
        damage = 14;
        type_attack = 1;
    }
};

class TurkishKnight: public Knight {
public:
    TurkishKnight() {
        cost = 30;
        started_health = 150;
        sword_protection = 1;
        arrow_protection = 15;
        damage = 25;
        type_attack = 3;
    }
};
#endif
