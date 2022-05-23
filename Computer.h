#ifndef COMPUTER_H
#define COMPUTER_H

#include "Move.h"
#include "Player.h"

class Computer : public Character{
    protected:
        // the name of the enemy derived from this class.
        std::string name;
    public:
        // basic contructor that is built off of for unique enemy classes.
        Computer();
        // basic deconstructor.
        ~Computer();

        // a function that will return the name of the enemy class.
        std::string getName();
        // a function that will let the computer randomly decide a move from the moveList vector of that enemy.
        void inputMove();
        // a function that will use that move.
        void useMove(Move _move, Player &_player);
};

#endif //COMPUTER_H