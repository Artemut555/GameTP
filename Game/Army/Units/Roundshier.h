#ifndef GAME_ROUNDSHIER_H
#define GAME_ROUNDSHIER_H

#include "Unit.h"
class Roundshier: public Unit {
public:
    virtual ~Roundshier() = default;
};

class RussianRoundshier: public Roundshier {
public:
    RussianRoundshier() {
        cost = 20;
        started_health = 70;
        pike_protection = 3;
        sword_protection = 1;
        arrow_protection = 15;
        damage = 6;
        type_attack = 0;
    }
};

class TurkishRoundshier: public Roundshier {
public:
    TurkishRoundshier() {
        cost = 30;
        started_health = 70;
        pike_protection = 3;
        sword_protection = 1;
        arrow_protection = 15;
        damage = 6;
        type_attack = 0;
    }
};
#endif
