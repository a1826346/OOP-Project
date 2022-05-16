#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>
#include<iostream>

#include "Move.h"

class Character {
protected:
    Move *moveList = new Move[maxMoves];
    int currentHealth;
    int maxHealth;
    int maxMoves;
    int moveNum;
    int speed;
    Move chosenMove;
    std::string classType;

public:
    Character();
    Character(int Health, int MaxMoves, int MoveNum);
    ~Character();

    void setMaxMoves(int _maxMoves);
    std::string getClassType();
    int getSpeed();
    int getMaxMoves();
    int getMoveNum();
    int getCurrentHealth();
    int getMaxHealth();
    Move getChosenMove();
    void gainHealth(int);
    void reduceHealth(int);
    virtual void inputMove();
    virtual void generateMoves();
    bool isDead();

};

#endif