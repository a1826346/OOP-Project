#ifndef BRUTE_H
#define BRUTE_H

#include "Player.h"

class Brute : public Player{
    private:
        std::string name = "Brute";
    public:
        // constructor to set the stats for the player if this class is chosen.
        Brute();
        // deconstructor.
        ~Brute();
        // function used to add unique moves to the moveList vector.
        void generateMoves();
};

#endif //BRUTE_H