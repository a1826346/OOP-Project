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
    int blockedChance = 0;
    if (_player.getClassType() == "Shieldsman"){
        blockedChance = 20;
    }
    if (_move.genChance() < _move.getHitChance()){
        sleep_for(seconds(1));
        if (_move.genChance() < _move.getCritChance()){
            _player.reduceHealth(_move.getDamage() * 2);
            gainHealth(_move.getHealAmount() * 2);
            _move.printAction();

            sleep_for(seconds(1));
            if (_move.getDamage() > 0 && _move.genChance() <= blockedChance){
                _player.gainHealth(_move.getDamage()*2);
                std::cout << "The " << _move.getMoveName() << " was however blocked." << std::endl;
            }
        }
        _player.reduceHealth(_move.getDamage());
        gainHealth(_move.getHealAmount());
        _move.printAction();

        sleep_for(seconds(1));
        if (_move.getDamage() > 0 && _move.genChance() <= blockedChance){
            _player.gainHealth(_move.getDamage());
            std::cout << "The " << _move.getMoveName() << " was however blocked." << std::endl;
        }

        if (currentHealth > maxHealth){
            currentHealth -= (currentHealth - maxHealth);
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