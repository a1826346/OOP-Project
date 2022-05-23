#ifndef GOBLIN_H
#define GOBLIN_H

#include "Player.h"

class Goblin : public Player {
    private:
        std::string name = "Goblin";
    public:
        // constructor to set the stats for the player if this class is chosen.
        Goblin();
        // deconstructor.
        ~Goblin();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //GOBLIN_H