#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "Army/Army.h"
#include "Town/Town.h"
#include "Economy.h"
#include "Knowledge.h"

class Player {
public:
    Town town;
    Economy economy;
    Knowledge knowledge;
    virtual void make_move () = 0;
};

class RussianPlayer: public Player {
public:
    RussianArmy army;
    void make_move() override {
        std::cout << "choose action:" << std::endl;
    }
    RussianPlayer() {
        army.createArcher();
        army.createRoundshier();
        army.createRoundshier();
        army.createKnight();
    }
};

class TurkishPlayer: public Player {
public:
    TurkishArmy army;
    void make_move() override {
        std::cout << "choose action:" << std::endl;
    }
    TurkishPlayer() {
        army.createArcher();
        army.createRoundshier();
        army.createRoundshier();
        army.createKnight();
    }
};

#endif
