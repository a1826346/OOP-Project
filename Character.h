#ifndef CHARACTER_H
#define CHARACTER_H
#include<string.h>
#include<iostream>

#include "Move.h"

class Character {
protected:
    int currentHealth;
    int maxHealth;
    int maxMoves;
    int moveNum;
    int speed;
    Move chosenMove;
    Move *moveList = new Move[10];

public:
    Character();
    Character(int Health, int MaxMoves, int MoveNum);
    ~Character();

    void setMaxMoves(int _maxMoves);
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