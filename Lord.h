#ifndef LORD_H
#define LORD_H

#include "Computer.h"

class Lord : public Computer {
    private:
    public:
        // constructor to set the stats for when this enemy is needed in a fight.
        Lord();
        // deconstructor.
        ~Lord();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //LORD_H