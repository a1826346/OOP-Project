#ifndef MOVE_H
#define MOVE_H

#include<string>
#include <chrono>
#include <ctime>

class Move{
    private:
        // variables that describe the move, and its behaivour.
        std::string moveName;
        int magicCost;
        int damage;
        std::string description;
        std::string actionText;
        int hitChance;
        int critChance;
        int healAmount;
        int speed;
    public:

        // basic constuctor that is intentionally basic to let generateMoves construct unique moves.
        Move();
        // basic deconstructor.
        ~Move();

        //setters
        // setting all the variables in the private part of the class.
        void setMoveName(std::string _moveName);
        void setMagicCost(int _magicCost);
        void setDamage(int _damage);
        void setDescription(std::string _descprition);
        void setActionText(std::string _actionText);
        void setHitChance(int _hitChance);
        void setCritChance(int _critChance);
        void setHealAmount(int _healAmount);
        void setSpeed(int _speed);

        //getters
        // returning all the variables in the private part of the class to the user.
        std::string getMoveName();
        int getMagicCost();
        int getDamage();
        std::string getDescription();
        std::string getActionText();
        int getHitChance();
        int getCritChance();
        int getHealAmount();
        int getSpeed();

        // generates a number between 1 and 100 randomly.
        int genChance();
        // prints the description of the move to the user through the terminal.
        void printDesc();
        // prints the action of the move to the user through the terminal.
        void printAction();
};

#endif //MOVE_H