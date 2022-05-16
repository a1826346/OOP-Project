#include <iostream>
#include <string.h>

#include "Game.h"
#include "Brute.h"
#include "Skeleton.h"
#include "Move.h"

using namespace std;

 void Game::startMenu(){
     // Opening text shown to the user, the three new lines at the beginning is to seperate the start of the game from any remaining text in the users terminal.
     cout << endl << endl << endl;
     cout << "The village of Boldan has fallen into dark times, with the tyranical Lord Drace oppressing the fair village people." << endl <<  "You are the villages last hope, a hero from a nearby village have been sent to wipeout Drace" << endl << "from his castle high on the hills." << endl << "Can you save the village people before its too late?" << endl;
     cout << endl;
     cout << "but first, who are you?" << endl << endl;

     // a string array filled with the characters the user can select is created. Allowing a loop to be made to list the possible characters to the user. preventing too much repitition in the code.
     string characters[6] = {"Brute","Warlock","Goblin","Warrior","Shieldsman","Ninja"};
     string descriptions[6] = {"The Brute has never lost a fight in his life, in hand to hand combat his raw strength is unmatched. Unluckily with his immense power comes a lack of speed.", "The Warlock has been training to wield magic since birth, he is a fragile fighter but can dish out a lot of damage quick.", "The Goblin is extremely quick, and can catch fighters off guard with rapid counter attacks, but is quite frail.", "The Warrior is skilled in every aspect of combat, a well rounded fighter.", "The Shieldsman has perfected the art of shield combat, using her trusty shield for both offense and defence", "The ninja uses stealth to his advantage, attacking before the enemy is aware of his presence gives him the upper hand going into fights."};
     for(int i = 0; i < 6; i++){
         cout << i+1 << ". " << characters[i] << ":" << endl << descriptions[i] << endl << endl;
         char choice = 0;
         cin >> choice;
         switch(choice){
             case '1':
             Brute player;
             user = player;
             cout << "you have chosen the Brute class" << endl;
             break;
             case '2':
            Warlock player;
            user = player;
             cout << "you have chosen the Warlock class" << endl;
             break;
             case '3':
             Goblin player;
             user = player;
             cout << "you have chosen the Goblin class" << endl;
             break;
             case '4':
             Warrior player;
             user = player;
             cout << "you have chosen the Warrior class" << endl;
             break;
             case '5':
             Shieldsman player;
             user player;
             cout << "you have chosen the Shieldsman class" << endl;
             break;
             case '6':
             Ninja player;
             user = player;
             cout << "you have chosen the Ninja class" << endl;
             break;
             default:
             Warrior player;
             user player;
             cout << "by default the Warrior class has been chosen" << endl;
             
             

        }
    }
}

void Game::run(){
    startMenu();
    Skeleton skeleton_1;
    Skeleton skeleton_2;
    //however many we want.
    Lord Drace;
    startFight(user, skeleton_1);
    startFight(user, skeleton_2);
    startFight(user, Drace);
}

void Game::end(){
    running = 0;
    //exit or abort function?
    exit
}

bool Game::isRunning(){
    if(running == 1){
        return true;
    }
    else{
         return false;
    }
}

void Game::startFight(Player &_user, Computer &_enemy){
    int userCurrentSpeed = _user.getSpeed();
    int enemyCurrentSpeed = _enemy.getSpeed();

    int playerIndex = 0;
    int enemyIndex = 0;
    while (_user.isDead() == false && _enemy.isDead() == false){
        _user.displayMoves();
        _user.inputMove();
        _enemy.inputMove();

        _user.useMove(_user.getChosenMove(), _enemy);
        _enemy.useMove(_enemy.getChosenMove(), _user);

        cout << "Player health: " << _user.getCurrentHealth() << endl;
        cout << _enemy.getName() << " health: " << _enemy.getCurrentHealth() << endl;


        // Work in progress speed system
        // _user.inputMove();
        // userCurrentSpeed += (_user.getChosenMove()).getSpeed();
        // playerIndex++;

        // _enemy.inputMove();
        // enemyCurrentSpeed += (_enemy.getChosenMove()).getSpeed();
        // enemyIndex++;

        // if (userCurrentSpeed >= enemyCurrentSpeed){
        //     while (userCurrentSpeed >= enemyCurrentSpeed){
        //         _user.useMove(_user.getChosenMove(), _enemy);
        //         userCurrentSpeed -= (_user.getChosenMove()).getSpeed();
        //     }
        // }
        // else {

        // }

    }
    if (_user.isDead()){
        end();
    }
        else{
        cout << "The " << _enemy.getName() << " was defeated." << std::endl;
    }
}

Game::Game(){
    Player _user;
    running = 0;
    user = _user
}

