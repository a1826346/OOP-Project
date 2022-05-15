#include "Player.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; 

Player::Player(){
    speed = 5;
    magicMax = 50;
    maxMoves = 1;
    classType = "Player Class";
    generateMoves();
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




int Player::getMagicMax(){
    return magicMax;
}

int Player::getCurrentMagic(){
    return currentMagic;
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
    std::cout << "Enter move number: ";
    std::cin >> moveNum;
    while (!std::cin || moveNum < 1 || moveNum > maxMoves || (moveList[moveNum-1]).getMagicCost() > currentMagic){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input";
        if ((moveList[moveNum-1]).getMagicCost() > currentMagic){
            std::cout << ": you do not have enough magic";
        }
        std::cout << std::endl;
        std::cout << "Enter move number: ";
        std::cin >> moveNum;
    }

    chosenMove = moveList[moveNum-1];
}

void Player::useMove(Move _move, Character &_enemy){
    depleteMagic(_move.getMagicCost());
    if (_move.genChance() < _move.getHitChance()){
        sleep_for(seconds(1));
        if (_move.genChance() < _move.getCritChance()){
            _enemy.reduceHealth(_move.getDamage() * 2);
            gainHealth(_move.getHealAmount() * 2);
            _move.printAction();
        }
        _enemy.reduceHealth(_move.getDamage());
        gainHealth(_move.getHealAmount());
        _move.printAction();

        if (currentHealth > maxHealth){
        currentHealth -= (currentHealth - maxHealth);
        }
    }
    else {
        std::cout << "The " << _move.getMoveName() << " failed." << std::endl;
    }

}

void Player::displayMoves(){
    for (int i = 0; i < maxMoves; i++){
        std::cout << i+1 << ": " << (moveList[i]).getMoveName() << " | "; 
    }
    std::cout << std::endl;
}

void Player::learnMove(Move _move){
    maxMoves++;
    moveList[maxMoves] = _move;
    std::cout << _move.getMoveName() << " learned." << std::endl;
}

void Player::generateMoves(){
    Move attack;
    moveList[0] = attack;
}

Player::~Player(){
    delete[] moveList;
}