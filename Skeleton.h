#ifndef SKELETON_H
#define SKELETON_H

#include "Computer.h"

class Skeleton : public Computer {
    private:
    public:
        // constructor to set the stats for when this enemy is needed in a fight.
        Skeleton();
        // deconstructor.
        ~Skeleton();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //SKELETON_H