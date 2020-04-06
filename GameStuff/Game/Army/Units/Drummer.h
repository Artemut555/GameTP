#ifndef GAME_DRUMMER_H
#define GAME_DRUMMER_H

#include "Unit.h"
class Drummer: public Unit {
public:
    double attack_bonus;
    virtual ~Drummer() = default;
};

class RussianDrummer: public Drummer {
public:
    RussianDrummer() {
        cost = 100;
        started_health = 50;
        damage = 0;
        type_attack = 4;
        attack_bonus = 1.2;
    }
};

class TurkishDrummer: public Drummer {
public:
    TurkishDrummer() {
        cost = 70;
        started_health = 50;
        damage = 0;
        type_attack = 4;
        attack_bonus = 1.1;
    }
};
#endif
