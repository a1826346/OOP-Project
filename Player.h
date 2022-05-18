#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Move.h"
#include <string>

class Player : public Character{
    protected:
        int magicMax;
        int currentMagic;
    public:
        Player();
        ~Player();

        //setters

        void setSpeed(int _speed);
        void setMagicMax(int _magicMax);
        void setCurrentMagic(int _curentMagic);
        void setClassType(std::string _classType);

        //getters

        int getMagicMax();
        int getCurrentMagic();


        void gainMagic(int gain);
        void depleteMagic(int deplete);
        void inputMove();
        void useMove(Move _move, Character &_enemy);
        void displayMoves();
        virtual void generateMoves();
};


#endif //PLAYER_H
