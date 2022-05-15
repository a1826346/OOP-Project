#include"Character.h"
#include<iostream>

/** sets up a character with no specified health maxMoves or moveNum */
Character::Character(){
    health = 100;
    maxMoves = 10;
    moveNum = 0;
}
/** sets up a character with specified health maxMoves or moveNum */
Character::Character(int Health, int MaxMoves, int MoveNum){
    health = Health;
    maxMoves = MaxMoves;
    moveNum = MoveNum;
}
/** adds a specified value to the character's health */
void Character::gainHealth(int value){
    health = health + value;
}
/** reduces the character's health by a specified value */
void Character::reduceHealth(int value){
    health = health - value;
}

/** function to check if the character is dead i.e. if health = 0 */
bool Character::isDead(){
    if(health == 0){
        return true;
    }else{
        return false;
    }
}