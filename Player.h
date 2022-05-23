#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Move.h"
#include <string>

class Player : public Character{
    protected:
        // 2 variables to track the magic of  the user along with the name of the class.
        int magicMax;
        int currentMagic;
        std::string classType;
    public:
        // default constructor that is used as a basis for the user classes.
        Player();
        // default deconstructor.
        ~Player();

        // setters
        // sets the variables that are protected in this class along with speed from the character class.
        void setSpeed(int _speed);
        void setMagicMax(int _magicMax);
        void setCurrentMagic(int _curentMagic);
        void setClassType(std::string _classType);

        // getters
        // returns the variables that are protected in this class.
        int getMagicMax();
        int getCurrentMagic();
        std::string getClassType();

        // a function that lets the user gain magic by increasing the currentMagic variable.
        void gainMagic(int gain);
        // a function inverse to gainMagic that reduces the currentMagic variable.
        void depleteMagic(int deplete);
        // a function that allows the user to choose a move for their character from the characters unique moveList vector.
        void inputMove();
        // a function that applies all the effects the chosen move creates, including damage, healing, magic reduction etc.
        void useMove(Move _move, Character &_enemy);
        // a function that displays the moves in the moveList vector in the terminal to allow the user to chose a move.
        void displayMoves();
};


#endif //PLAYER_H
