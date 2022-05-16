#include "Character.h"
#include "Move.h"
#include<iostream>

/** sets up a character with no specified health maxMoves or moveNum */
Character::Character(){
    maxHealth = 100;
    currentHealth = maxHealth;
    maxMoves = 10;
    moveNum = 0;
}
/** sets up a character with specified health maxMoves or moveNum */
Character::Character(int Health, int MaxMoves, int MoveNum){
    currentHealth = Health;
    maxMoves = MaxMoves;
    moveNum = MoveNum;
}
/** adds a specified value to the character's health */
void Character::gainHealth(int value){
    currentHealth = currentHealth + value;
}
/** reduces the character's health by a specified value */
void Character::reduceHealth(int value){
    currentHealth = currentHealth - value;
}

/** sets the character's maximum number of moves */
void Character::setMaxMoves(int _maxMoves){
    this->maxMoves = _maxMoves;
}

/** returns the character's chosen move */
Move Character::getChosenMove(){
    return chosenMove;
}

/** returns the character's maximum number of moves */
int Character::getMaxMoves(){
    return maxMoves;
}

/** returns the character's chosen move number */
int Character::getMoveNum(){
    return moveNum;
}

/** returns the character's speed */
int Character::getSpeed(){
    return speed;
}

/** returns the character's current health */
int Character::getCurrentHealth(){
    return currentHealth;
}

int Character::getMaxHealth(){
    return maxHealth;
}

/** function to check if the character is dead i.e. if health <= 0 */
bool Character::isDead(){
    if(currentHealth <= 0){
        return true;
    }else{
        return false;
    }
}

void Character::inputMove(){

}

void Character::generateMoves(){
    Move attack;
    moveList[0] = attack;
}

std::string Character::getClassType(){
    return classType;
}

Character::~Character(){
    
}
