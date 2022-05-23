#ifndef THIEF_H
#define THIEF_H

#include "Player.h"

class Thief : public Player {
    private:
        std::string name = "Thief";
    public:
        // constructor to set the stats for the player if this class is chosen.
        Thief();
        // deconstructor.
        ~Thief();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //THIEF_H