#include <iostream>
#include <string.h>

#include "Brute.h"
#include "Skeleton.h"
#include "Move.h"
#include "Warlock.h"
#include "Goblin.h"
#include "Warrior.h"
#include "Shieldsman.h"
#include "Thief.h"
#include "Game.h"
#include "Lord.h"
#include "UndeadKnight.h"
#include <chrono>
#include <thread>
#include <stdlib.h>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;

using namespace std;

// Start Menu function is used to present to opening menu, both letting the user pick what character they wish to play and the start of the story
int Game::startMenu(){
    // Opening text shown to the user, the three new lines at the beginning is to seperate the start of the game from any remaining text in the users terminal.
    cout << endl << endl << endl;
    cout << "The village of Boldan has fallen into dark times, with the tyranical Lord Drace oppressing the fair village people." << endl;
    sleep_for(seconds(2));
    cout <<  "You are the village's last hope, a hero from a nearby village sent to wipe out Drace from his castle high on the hills." << endl;
    sleep_for(seconds(2)); 
    cout << "Can you save the village people before its too late?" << endl;
    sleep_for(seconds(2));
    cout << endl;

    cout << "Press Enter to Continue";
    getchar();
    cout << "\033[A\33[2KBut first, who are you?" << endl << endl;
    sleep_for(seconds(2));

    // a string array filled with the characters the user can select is created. Allowing a loop to be made to list the possible characters to the user. preventing too much repitition in the code.
    string characters[6] = {"Brute","Warlock","Goblin","Warrior","Shieldsman","Thief"};
    string descriptions[6] = {"The Brute has never lost a fight in his life, in hand to hand combat his raw strength is unmatched. Unluckily with his immense power comes a lack of speed.", "The Warlock has been training to wield magic since birth, he is a fragile fighter but can dish out a lot of damage quick.", "The Goblin is extremely quick, and can catch fighters off guard with rapid counter attacks, but is quite frail.", "The Warrior is skilled in every aspect of combat, a well rounded fighter.", "The Shieldsman has perfected the art of shield combat, using her trusty shield for both offense and defence", "The Thief uses stealth to his advantage, attacking before the enemy is aware of his presence gives him the upper hand going into fights."};
    for(int i = 0; i < 6; i++){
        cout << i+1 << ". " << characters[i] << ":" << endl << descriptions[i] << endl << endl;
        sleep_for(milliseconds(300));
    }
    // Asking the user for their input for which character they wish to play and using a switch statement to use the right class.
    char choice = 0;
    cout << "Please input the number corresponding to the class you want to play: ";
    cin >> choice;
    int userClass;

    Player *a = new Brute();    Player *b = new Warlock();  Player *c = new Goblin();   Player *d = new Warrior();  Player *e = new Shieldsman();   Player *f = new Thief();
    switch(choice){
        case '1':
            user = a;
            delete b;   delete c;   delete d;   delete e;   delete f;
            a->generateMoves();
            cout << "You have chosen the Brute class" << endl;
            break;
        case '2':
            user = b;
            b->generateMoves();
            delete a;   delete c;   delete d;   delete e;   delete f;
            cout << "You have chosen the Warlock class" << endl;
            break;
        case '3':
            user = c;
            c->generateMoves();
            delete a;   delete b;   delete d;   delete e;   delete f;
            cout << "You have chosen the Goblin class" << endl;
            break;
        case '4':
            user = d;
            d->generateMoves();
            delete a;   delete b;   delete c;   delete e;   delete f;
            cout << "You have chosen the Warrior class" << endl;
            break;
        case '5':
            user = e;
            e->generateMoves();
            delete a;   delete b;   delete c;   delete d;   delete f;
            cout << "You have chosen the Shieldsman class" << endl;
            break;
        case '6':
            user = f;
            f->generateMoves();
            delete a;   delete b;   delete c;   delete d;   delete f;
            cout << "You have chosen the Thief class" << endl;
            break;
        default:
            delete a;   delete b;   delete c;   delete d;  delete e;   delete f;
            cout << "Incorrect input" << endl;
            end();

    }


    // Outputting the story, and using cin to ask the user to pick their path when the story begins, this will change what enemies they face.
    cout << endl << "As you approach the castle, you spot a cave near the side of the castle walls." << endl;
    sleep_for(seconds(3)); 
    cout << "A quick search of this cave reveals a hidden entrance into the castles dungeons." << endl;
    sleep_for(seconds(3)); 
    cout << "You make your way through to the dungeon and are instantly met with a decison." << endl;
    sleep_for(seconds(3)); 
    cout << "Do you decide to move up or down from the dungeons? " << endl;
    sleep_for(seconds(1)); 
    cout << "1 for up, 2 for down: ";
    int UorD;
    cin >> UorD;
    // Changing the story based off the input from the user.
    if(UorD == 1){
        cout << endl << endl << "You travel upstairs to the main halls of the castle, as you travel the halls you are met by a knight in black armour..." << endl;
        sleep_for(seconds(2)); 
        cout << "an undead knight! A story of legend brought to life?" << endl;
        sleep_for(seconds(2)); 
        cout << "Nevermind that right now, you've got a battle to win!" << endl;
        sleep_for(seconds(2));
        cout << "\nPress Enter to Continue";
        getchar(); getchar();
        cout << "\033[A\33[2K";
    }
    else if(UorD == 2){
        cout << endl << endl << "You travel further into the depths of the castles dungeons. As you travel further and further lower, you reach a large open cavern." << endl;
        sleep_for(seconds(2)); 
        cout << "In the darkness you spot a dark figure walking towards you." << endl;
        sleep_for(seconds(2)); 
        cout << "As it walks into the light you spot its hollow body, its a skeleton!" << endl;
        sleep_for(seconds(2)); 
        cout << "How is this even possible?" << endl;
        sleep_for(seconds(2));
        cout << "Your thoughts are quickly interupted, this is no time to ponder, its time to fight!" << endl;
        sleep_for(seconds(2));
        cout << "\nPress Enter to Continue";
        getchar(); getchar();
        cout << "\033[A\33[2K";
    }
    else{
        cout << "incorrect input" << endl;
        end();
    }
    return UorD;
}

// function that will execute all the code required to run the game through completely.
void Game::run(){
    int decide = 0;
    // running the start of the game.
    decide = startMenu();
    Lord Drace;
    Drace.generateMoves();
    // starting the fight based off the decision in the start.
    if(decide == 1){
    UndeadKnight undead_1;
    undead_1.generateMoves();
    startFight(*user, undead_1);
    }
    else{
    Skeleton skeleton_1;
    skeleton_1.generateMoves();
    startFight(*user, skeleton_1);
    }
    // running the mid game and starting the second fights of the story.
    midGame();
    if(decide == 1){
    UndeadKnight undead_2;
    undead_2.generateMoves();
    startFight(*user, undead_2);
    }
    else{
    Skeleton skeleton_2;
    skeleton_2.generateMoves();
    startFight(*user, skeleton_2);
    }
    // running the end of the story both pre and post boss, with the boss fight in between.
    endGame();
    startFight(*user, Drace);
    final();
    stats(user);
    endGame();
}

// the story outputted in the terminal to show to user what is happening in the story between the first and second fight.
void Game::midGame(){
    cout << "\nPress Enter to Continue";
    getchar(); getchar();
    cout << "\033[A\33[2K";
    cout << "As the creature fell to the ground, an eerie sound bellowed from deep in the castle." << endl;
    sleep_for(seconds(2)); 
    cout << "Not wanting to get caught by another creature you run away, searching for any traces of Lord Drace as you do." << endl;
    sleep_for(seconds(2));
    cout << "You see a bright red light in the distance, as you go to investigate the source to the light, you are ambushed!" << endl;
    sleep_for(seconds(2));
    cout << "A creature identical to the first drops from the roof, with no time to think you jump into another battle!" << endl;
    sleep_for(seconds(2));
    cout << "\nPress Enter to Continue";
    getchar();
    cout << "\033[A\33[2K";
}

// the story outputted in the terminal after the second fight up until the boss fight showing the user the story.
void Game::endGame(){
    cout << "\nPress Enter to Continue";
    getchar(); getchar();
    cout << "\033[A\33[2K";
    cout << "Now with time to examine the light source, you discover that the light is coming from a portal." << endl;
    sleep_for(seconds(2));
    cout << "Not trusting the portal, you go to shut it down when a wave of enemies come rushing into the room." << endl;
    sleep_for(seconds(2));
    cout << "Acting quick you run into the portal and shut it down from the other side." << endl;
    sleep_for(seconds(2));
    cout << "Once you calm down, you realise the massive throne sitting across the room, at the top a dark figure sits." << endl;
    sleep_for(seconds(2));
    cout << endl << "Without a word, the dark figure stands up, and springs off the throne towards you..." << endl;
    sleep_for(seconds(2));
    cout << "you get a quick glimpse as the figure passed through the light, its Lord Drace himself!" << endl;
    sleep_for(seconds(2));
    cout << "Lets hope you have what it takes to take him down!" << endl << endl;
    sleep_for(seconds(2));
    cout << "\nPress Enter to Continue";
    getchar();
    cout << "\033[A\33[2K";
}

// the final part of the story shown to the user after they beat the Lord Drace boss.
void Game::final(){
    cout << "with the death of Lord Drace, the village people were once again free people" << endl << "The castle was taken down and the materials were used to build a wall around the village to keep the villagers safe" << endl << "you were praised as the hero of the village, all the village people look up to you" << endl << endl << "so what journey comes next? " << endl << endl;
}


// a function that can be called that will stop the game from running any further.
void Game::end(){
    running = 0;
    exit(0);
}

// a function to check whether the game is currently running, mostly used for other functions to make sure the game is in progress.
bool Game::isRunning(){
    if(running == 1){
        return true;
    }
    else{
         return false;
    }
}

// a function that simply prints a text divider to the terminal
void Game::printLineDivider(bool _type){
    if (_type){
        std::cout << "--------" << std::endl;
    }
    else{
        std::cout << "========" << std::endl;
    }

}

// The function that starts a fight between a player and a computer class.
void Game::startFight(Player &_user, Computer &_enemy){
    cout << "Player Health: " << _user.getCurrentHealth() << " | " << _enemy.getName() << " Health: " << _enemy.getCurrentHealth() << endl;
    cout << "Player Magic: " << _user.getCurrentMagic() << endl;
    _user.setCurrentMagic(_user.getMagicMax());
    // checking to make sure both fighters are still alive to continue the fight.
    while (_user.isDead() == false && _enemy.isDead() == false){
        // displaying moves to the user, letting them chose a move and choosing a move for the enemy.
        printLineDivider(0);
        _user.displayMoves();
        printLineDivider(0);
        _user.inputMove();
        _enemy.inputMove();

        // using the moves that the user chose and the computer was randomly allocated.
        printLineDivider(1);
        if (_user.isDead() == false){
            _user.useMove(_user.getChosenMove(), _enemy);
        }
        printLineDivider(1);
        sleep_for(seconds(1));
        if (_enemy.isDead() == false){
            _enemy.useMove(_enemy.getChosenMove(), _user);
        }

        //displaying the health of the users character and the enemy to the user.
        sleep_for(seconds(1));
        printLineDivider(0);
        cout << "Player Health: " << _user.getCurrentHealth() << " | " << _enemy.getName() << " Health: " << _enemy.getCurrentHealth() << endl;
        cout << "Player Magic: " << _user.getCurrentMagic() << endl;
        sleep_for(seconds(1));
    }
    // ending the game if the users character dies.
    if (_user.isDead()){
        end();
    }
    // showing the user the enemy was defeated if they beat the enemy.
        else{
            printLineDivider(0);
            cout << "The " << _enemy.getName() << " was defeated." << std::endl;
            printLineDivider(0);
    }
}

void Game::stats(Player *_user){
    sleep_for(seconds(3));
    cout << "Damage Dealt: " << 810 << endl;
    cout << "Damage Taken: " << _user->getMaxHealth() - _user->getCurrentHealth() << endl;
    cout << "Magic Used: " << _user->getMagicMax() - _user->getCurrentMagic() << endl;
    cout << "Character Chosen: " << _user->getClassType() << endl << endl;
}

// default contructor.
Game::Game(){
    running = 0;
}

// default deconstructor.
Game::~Game(){
    delete user;
}

