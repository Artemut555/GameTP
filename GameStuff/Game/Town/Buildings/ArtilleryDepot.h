#ifndef GAME_ARTILLERYDEPOT_H
#define GAME_ARTILLERYDEPOT_H

#include "Building.h"

class ArtilleryDepot: public Building {
public:
    bool build = false;
    ArtilleryDepot() {
        cost = 300;
    }
};

#endif