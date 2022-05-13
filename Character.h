#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>
#include<iostream>

class Character {
protected:
    int health;
    int maxMoves;
    int moveNum;

public:
    Character();
    Character(int Health, int MaxMoves, int MoveNum);
    void gainHealth(int);
    void reduceHealth(int);
    virtual void inputMove() = 0;
    bool isDead();

};

#endif