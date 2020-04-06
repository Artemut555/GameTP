#ifndef GAME_KNOWLEDGE_H
#define GAME_KNOWLEDGE_H

class Knowledge {
    bool increased_protection = false;
    bool increased_damage = false;
    bool increased_money_per_move = false;
    void scout_enemy() {
        std::cout << "enemy army: " << std::endl;
    }
    void increase_protection() {
        increased_protection = true;
    }
    void increase_damage() {
        increased_damage = true;
    }
    void increase_money_per_move() {
        increased_money_per_move = true;
    }
};

#endif
