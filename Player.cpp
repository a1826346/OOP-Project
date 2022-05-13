#include "Player.h"

Player::Player(){

}

void setSpeed(int _speed){
    this->speed = _speed;
}

void setMagic(int _magic){
    this->magic = _magic;
}

void setClassType(std::string _classType){
    this->classType = _classType;
}


int getSpeed(){
    return speed;
}

int getMagicMax(){
    return magicMax;
}

int getCurrentMagic(){
    return currentMagic;
}

std::string getClassType(){
    return classType;
}


void gainMagic(int gain){
    currentMagic += gain;
    if (currentMagic > magicMax){
        currentMagic = magicMax;
    }
}

void depleteMagic(int deplete){
    currentMagic -= deplete;
    if (currentMagic < 0){
        currentMagic = 0;
    }
}

void inputMove(){

}

void useMove(){

}

void displayMoves(){

}

void learnMove(Move _move){
    
}