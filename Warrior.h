#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
    private:
        std::string name = "Warrior";
    public:
        // constructor to set the stats for the player if this class is chosen.
        Warrior();
        // deconstructor.
        ~Warrior();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //WARRIOR_H