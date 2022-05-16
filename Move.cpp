#include "Move.h"
#include <iostream>

/** default move constructor */
Move::Move(){
    setMoveName("Attack");
    setDescription("...");
    setActionText("...");
    setMagicCost(0);
    setDamage(1);
    setHitChance(100);
    setCritChance(50);
    setHealAmount(0);
    setSpeed(1);
}

/** default move destructor */
Move::~Move(){

}

/** sets move's name to specified string */
void Move::setMoveName(std::string _moveName){
    this->moveName = _moveName;
}
/** sets move's magic cost to specified integer */
void Move::setMagicCost(int _magicCost){
    this->magicCost = _magicCost;
}
/** sets move's damage to specified integer */
void Move::setDamage(int _damage){
    this->damage = _damage;
}
/** sets move's description to specified string */
void Move::setDescription(std::string _descprition){
    this->description = _descprition;
}
/** set's move's action text to specified string */
void Move::setActionText(std::string _actionText){
    this->actionText = _actionText;
}
/** sets move's hit chance to specified integer (0-100%) */
void Move::setHitChance(int _hitChance){
    this->hitChance = _hitChance;
}
/** sets move's crit chance to specified integer (0-100%) */
void Move::setCritChance(int _critChance){
    this->critChance = _critChance;
}
/** sets move's heal amount to specified integer */
void Move::setHealAmount(int _healAmount){
    this->healAmount = _healAmount;
}
/** sets move's speed to specified integer */
void Move::setSpeed(int _speed){
    this->speed = _speed;
}

/** returns the move's name string */
std::string Move::getMoveName(){
    return moveName;
}
/** returns the move's magic cost integer */
int Move::getMagicCost(){
    return magicCost;
}
/** returns the move's damage integer */
int Move::getDamage(){
    return damage;
}
/** returns the move's description string*/
std::string Move::getDescription(){
    return description;
}
/** returns the move's action text string */
std::string Move::getActionText(){
    return actionText;
}
/** returns the move's hit chance integer */
int Move::getHitChance(){
    return hitChance;
}
/** returns the move's crit chance integer */
int Move::getCritChance(){
    return critChance;
}
/** returns the move's heal amount integer */
int Move::getHealAmount(){
    return healAmount;
}
/** returns the move's speed integer */
int Move::getSpeed(){
    return speed;
}

/** generates a chance integer (0-100) */
int Move::genChance(){
    srand((unsigned)time(0));
    int num = rand()%100+1;
    return num;
}
/** prints the move's description text */
void Move::printDesc(){
    std::cout << description << std::endl;
}
/** prints the move's action text */
void Move::printAction(){
    std::cout << actionText << std::endl;
}