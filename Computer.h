#ifndef COMPUTER_H
#define COMPUTER_H

#include "Move.h"
#include "Character.h"

class Computer : public Character{
    protected:
        std::string name;
        Move *moveList = new Move[maxMoves];
    public:
        Computer();
        ~Computer();

        std::string getName();
        void generateMoves();
        void inputMove();
        void useMove(Move _move, Character &_player);
};

#endif //COMPUTER_H