#ifndef UNDEADKNIGHT_H
#define UNDEADKNIGHT_H

#include "Computer.h"

class UndeadKnight : public Computer {
    private:
    public:
        // constructor to set the stats for when this enemy is needed in a fight.
        UndeadKnight();
        // deconstructor.
        ~UndeadKnight();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //UNDEADKNIGHT_H