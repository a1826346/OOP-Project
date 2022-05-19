#ifndef COMPUTER_H
#define COMPUTER_H

#include "Move.h"
#include "Player.h"

class Computer : public Character{
    protected:
        std::string name;
    public:
        Computer();
        ~Computer();

        std::string getName();
        void inputMove();
        void useMove(Move _move, Player &_player);
};

#endif //COMPUTER_H