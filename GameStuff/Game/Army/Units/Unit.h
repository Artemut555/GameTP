#ifndef GAME_UNIT_H
#define GAME_UNIT_H

class Unit {
public:
    int cost;
    int started_health;
    int current_health = started_health;
    int pike_protection = 0;
    int sword_protection = 0;
    int arrow_protection = 0;
    int damage;
    int type_attack;// 0 - sword, 1 - pike, 2 - arrows, 3 - cannonballs, 4 - drummer
};

#endif
