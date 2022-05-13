#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Move.h"
#include <string>

class Player : public Character{
    protected:
        Move *moveList;
        int speed;
        int magicMax;
        int currentMagic;
        std::string classType;
    public:
        Player();
        ~Player();

        //setters

        void setSpeed(int _speed);
        void setMagic(int _magic);
        void setClassType(std::string _classType);

        //getters
        
        int getSpeed();
        int getMagicMax();
        int getCurrentMagic();
        std::string getClassType();

        void gainMagic(int gain);
        void depleteMagic(int deplete);
        void inputMove();
        void useMove();
        void displayMoves();
        void learnMove(Move _move);
};


#endif //PLAYER_H
