#ifndef GAME_TOWN_H
#define GAME_TOWN_H

#include "Buildings/Mines.h"
#include "Buildings/Towers.h"
#include "Buildings/Academy.h"
#include "Buildings/Barrack.h"
#include "Buildings/Stable.h"
#include "Buildings/ArtilleryDepot.h"

class Town {
public:
    Mines mines;
    Towers towers;
    Academy academy;
    Barrack barrack;
    Stable stable;
    ArtilleryDepot artillery_depot;
    void add_mine() {
        mines.cnt++;
    }
    void add_towers() {
        towers.cnt++;
    };
    void build_academy() {
        academy.build = true;
    }
    void build_barrack() {
        barrack.build = true;
    }
    void build_Stable() {
        stable.build = true;
    }
    void build_artillery_depot() {
        artillery_depot.build = true;
    }
};

#endif
