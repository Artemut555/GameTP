#ifndef GAME_SIEGEWEAPON_H
#define GAME_SIEGEWEAPON_H

#include "Unit.h"
class SiegeWeapon: public Unit {
public:
    virtual ~SiegeWeapon() = default;
};

class RussianSiegeWeapon: public SiegeWeapon {
public:
    RussianSiegeWeapon() {
        cost = 100;
        started_health = 50;
        damage = 50;
        type_attack = 3;
    }
};

class TurkishSiegeWeapon: public SiegeWeapon {
public:
    TurkishSiegeWeapon() {
        cost = 90;
        started_health = 50;
        damage = 50;
        type_attack = 3;
    }
};
#endif
