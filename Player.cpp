#include "Player.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;

/** default player constructor */
Player::Player(){
    speed = 5;
    magicMax = 50;
    maxMoves = 1;
    classType = "Player Class";
}

/**  sets the player's speed */
void Player::setSpeed(int _speed){
    this->speed = _speed;
}

/** sets the player's maximum amount of magic to hold */
void Player::setMagicMax(int _magicMax){
    this->magicMax = _magicMax;
}

/** sets the player's current amount of magic */
void Player::setCurrentMagic(int _currentMagic){
    this->currentMagic = _currentMagic;
}

/** sets the player's class type as a string */
void Player::setClassType(std::string _classType){
    this->classType = _classType;
}

/** returns the player's maximum amount of magic */
int Player::getMagicMax(){
    return magicMax;
}

/** returns the player's current magic */
int Player::getCurrentMagic(){
    return currentMagic;
}

/** increases the player's current magic by specified integer amount */
void Player::gainMagic(int gain){
    currentMagic += gain;
    if (currentMagic > magicMax){
        currentMagic = magicMax;
    }
}

/** reduces the player's current magic by specified integer amount */
void Player::depleteMagic(int deplete){
    currentMagic -= deplete;
    if (currentMagic < 0){
        currentMagic = 0;
    }
}

/** prompt for user to input their chosen move during a fight instance */
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

/** function to use move and apply its effects on enemy object */
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

/** displays the player's available moves */
void Player::displayMoves(){
    for (int i = 0; i < maxMoves; i++){
        std::cout << i+1 << ": " << (moveList[i]).getMoveName() << " | ";
    }
    std::cout << std::endl;
}

/** default destructor */
Player::~Player(){
    delete[] moveList;
}