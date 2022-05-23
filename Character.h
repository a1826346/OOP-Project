#ifndef CHARACTER_H
#define CHARACTER_H
#include<string.h>
#include<iostream>

#include "Move.h"

class Character {
protected:
    // variables that are foundational for any character in the game.
    int currentHealth;
    int maxHealth;
    int maxMoves;
    int moveNum;
    int speed;

    // a variable of type Move that holds the move that is chosen by the user.
    Move chosenMove;

    // a vector of the class Move that will house the moves for each character in the game.
    Move *moveList = new Move[10];

public:
    // basic constructor that is built off for the player and computer class.
    Character();
    Character(int Health, int MaxMoves, int MoveNum);
    // basic deconstructor.
    ~Character();

    // setting the amount of moves for the character.
    void setMaxMoves(int _maxMoves);

    // returning variables to the user from the protected part of the class.
    int getSpeed();
    int getMaxMoves();
    int getMoveNum();
    int getCurrentHealth();
    int getMaxHealth();
    Move getChosenMove();

    // manipulating health up or down.
    void gainHealth(int);
    void reduceHealth(int);

    // virtual abstract functions to be passed to child classes.
    virtual void inputMove() = 0;
    virtual void generateMoves() = 0;

    // a function that returns if the character is alive or not.
    bool isDead();
};

#endif