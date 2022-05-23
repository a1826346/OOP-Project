#ifndef SHIELDSMAN_H
#define SHIELDSMAN_H

#include "Player.h"

class Shieldsman : public Player {
    private:
        std::string name = "Shieldsman";
    public:
        // constructor to set the stats for the player if this class is chosen.
        Shieldsman();
        // deconstructor.
        ~Shieldsman();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //SHIELDSMAN