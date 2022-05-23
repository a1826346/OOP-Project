#include "Computer.h"
#include "Player.h"
#include <chrono>
#include <thread>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; 

/** default computer constructor */
Computer::Computer(){
    maxMoves = 0;
    generateMoves();
}

/** computer's randomized move input */
void Computer::inputMove(){
    srand((unsigned)time(0));
    int num = rand()%maxMoves+1;
    chosenMove = moveList[num-1];
}

/** function for computer to use move and apply its effects on player object */
void Computer::useMove(Move _move, Player &_player){
    std::cout << getName() << " used " << _move.getMoveName() << "." << std::endl;
    int damageVal = _move.getDamage();
    int healVal = _move.getHealAmount();
    bool crit = false;
    int blockedChance = 0;
    if (_player.getClassType() == "Shieldsman"){
        blockedChance = 20;
    }
    if (_move.genChance() < _move.getHitChance()){
        sleep_for(seconds(1));
        if (_move.genChance() < _move.getCritChance()){
            damageVal = damageVal * 2;
            healVal = healVal * 2;
            _move.printAction();
            crit = true;
            std::cout << "It was a critical success!" << std::endl;
        }
        sleep_for(seconds(1));
        if (_move.getDamage() > 0 && _move.genChance() <= blockedChance){
            damageVal = 0;
            std::cout << "The " << _move.getMoveName() << " was however blocked." << std::endl;
        }
        
        _player.reduceHealth(damageVal);
        gainHealth(healVal);
        if (!crit){
            _move.printAction();
        }

        if (currentHealth > maxHealth){
            currentHealth -= (currentHealth - maxHealth);
            healVal = currentHealth - maxHealth;
        }

        if (damageVal > 0 && healVal == 0){
            std::cout << damageVal << " damage was dealt." << std::endl;
        } else if(damageVal == 0 && healVal > 0){
            std::cout << healVal << " health was healed." << std::endl;
        } else if(damageVal > 0 && healVal > 0){
            std::cout << damageVal << " damage was dealt." << std::endl;
            std::cout << healVal << " health was healed." << std::endl;
        }
    }
    else {
        std::cout << "The " << name << "'s " << _move.getMoveName() << " failed." << std::endl;
    }
}

/** returns computer object's name */
std::string Computer::getName(){
    return name;
}

/** default computer destructor */
Computer::~Computer(){

}