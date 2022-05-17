#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
    private:
        std::string name = "?";
    public:
        Warrior();
        ~Warrior();
        void generateMoves();
};

#endif //WARRIOR_H