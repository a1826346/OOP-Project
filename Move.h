#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <chrono>
#include <ctime>

class Move{
    private:
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
        Move();
        ~Move();

        //setters

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

        std::string getMoveName();
        int getMagicCost();
        int getDamage();
        std::string getDescription();
        std::string getActionText();
        int getHitChance();
        int getCritChance();
        int setHealAmount();
        int setSpeed();

        int genChance();
        void printDesc();
        void printAction(); 
};

#endif //MOVE_H