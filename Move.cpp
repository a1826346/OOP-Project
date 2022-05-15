#include "Move.h"
#include <iostream>

Move::Move(){

}
Move::~Move(){

}


void Move::setMoveName(std::string _moveName){
    this->moveName = _moveName;
}
void Move::setMagicCost(int _magicCost){
    this->magicCost = _magicCost;
}
void Move::setDamage(int _damage){
    this->damage = _damage;
}
void Move::setDescription(std::string _descprition){
    this->description = _descprition;
}
void Move::setActionText(std::string _actionText){
    this->actionText = _actionText;
}
void Move::setHitChance(int _hitChance){
    this->hitChance = _hitChance;
}
void Move::setCritChance(int _critChance){
    this->critChance = _critChance;
}
void Move::setHealAmount(int _healAmount){
    this->healAmount = _healAmount;
}
void Move::setSpeed(int _speed){
    this->speed = _speed;
}

std::string Move::getMoveName(){
    return moveName;
}
int Move::getMagicCost(){
    return magicCost;
}
int Move::getDamage(){
    return damage;
}
std::string Move::getDescription(){
    return description;
}
std::string Move::getActionText(){
    return actionText;
}
int Move::getHitChance(){
    return hitChance;
}
int Move::getCritChance(){
    return critChance;
}
int Move::setHealAmount(){
    return healAmount;
}
int Move::setSpeed(){
    return speed;
}

int Move::genChance(){
    srand((unsigned)time(0));
    int num = rand()%100+1;
}
void Move::printDesc(){
    std::cout << description << std::endl;
}
void Move::printAction(){
    std::cout << actionText << std::endl;
}