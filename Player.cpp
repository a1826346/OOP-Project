#include "Player.h"

Player::Player(){

}

void Player::setSpeed(int _speed){
    this->speed = _speed;
}

void Player::setMagicMax(int _magicMax){
    this->magicMax = _magicMax;
}

void Player::setCurrentMagic(int _currentMagic){
    this->currentMagic = _currentMagic;
}

void Player::setClassType(std::string _classType){
    this->classType = _classType;
}


int Player::getSpeed(){
    return speed;
}

int Player::getMagicMax(){
    return magicMax;
}

int Player::getCurrentMagic(){
    return currentMagic;
}

std::string Player::getClassType(){
    return classType;
}


void Player::gainMagic(int gain){
    currentMagic += gain;
    if (currentMagic > magicMax){
        currentMagic = magicMax;
    }
}

void Player::depleteMagic(int deplete){
    currentMagic -= deplete;
    if (currentMagic < 0){
        currentMagic = 0;
    }
}

void Player::inputMove(){

}

void Player::useMove(){

}

void Player::displayMoves(){

}

void Player::learnMove(Move _move){
    
}

Player::~Player(){

}