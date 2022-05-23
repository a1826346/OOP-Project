#ifndef WARLOCK_H
#define WARLOCK_H

#include "Player.h"

class Warlock : public Player {
    private:
        std::string name = "Warlock";
    public:
        
        Warlock();
        // deconstructor.
        ~Warlock();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //WARLOCK_H