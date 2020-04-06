#ifndef GAME_ACADEMY_H
#define GAME_ACADEMY_H

#include "Academy.h"

class Academy: public Building {
public:
    bool build = false;
    Academy() {
        cost = 300;
    }
};

#endif
