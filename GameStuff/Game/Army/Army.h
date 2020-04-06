#ifndef GAME_ARMY_H
#define GAME_ARMY_H

#include "Units/Archor.h"
#include "Units/Drummer.h"
#include "Units/Spear.h"
#include "Units/Knight.h"
#include "Units/Roundshier.h"
#include "Units/SiegeWeapon.h"

class Army {
public:
    ~Army() {
        for (auto & knight : knights) {
            delete knight;
        }
        for (auto & roundshier : roundshiers) {
            delete roundshier;
        }
        for (auto & spear : spears) {
            delete spear;
        }
        for (auto & siegeWeapon : siege_weapons) {
            delete siegeWeapon;
        }
        for (auto & drummer : drummers) {
            delete drummer;
        }
        for (auto & archer : archers) {
            delete archer;
        }
    }
    virtual void createKnight() = 0;
    virtual void createRoundshier() = 0;
    virtual void createSpear() = 0;
    virtual void createSiegeWeapon() = 0;
    virtual void createDrummer() = 0;
    virtual void createArcher() = 0;
    std::vector<Knight*> knights;
    std::vector<Roundshier*> roundshiers;
    std::vector<Spear*> spears;
    std::vector<SiegeWeapon*> siege_weapons;
    std::vector<Drummer*> drummers;
    std::vector<Archer*> archers;
    void print() const {
        std::cout << "Your Army: \n";
    }
};

class RussianArmy: public Army {
public:
    void createKnight() override {
        knights.push_back(new RussianKnight);
    }
    void createRoundshier() override {
        roundshiers.push_back(new RussianRoundshier);
    }
    void createSpear() override {
        spears.push_back(new RussianSpear);
    }
    void createSiegeWeapon() override {
        siege_weapons.push_back(new RussianSiegeWeapon);
    }
    void createDrummer() override {
        drummers.push_back(new RussianDrummer);
    }
    void createArcher() override {
        archers.push_back(new RussianArcher);
    }
};

class TurkishArmy: public Army {
public:
    void createKnight() override {
        knights.push_back(new TurkishKnight);
    }
    void createRoundshier() override {
        roundshiers.push_back(new TurkishRoundshier);
    }
    void createSpear() override {
        spears.push_back(new TurkishSpear);
    }
    void createSiegeWeapon() override {
        siege_weapons.push_back(new TurkishSiegeWeapon);
    }
    void createDrummer() override {
        drummers.push_back(new TurkishDrummer);
    }
    void createArcher() override {
        archers.push_back(new TurkishArcher);
    }
};
#endif
