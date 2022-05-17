#include <iostream>
#include <string.h>

#include "Game.h"
#include "Brute.h"
#include "Skeleton.h"
#include "Move.h"

using namespace std;

// Start Menu function is used to present to opening menu, both letting the user pick what character they wish to play and the start of the story
 int Game::startMenu(){
     // Opening text shown to the user, the three new lines at the beginning is to seperate the start of the game from any remaining text in the users terminal.
     cout << endl << endl << endl;
     cout << "The village of Boldan has fallen into dark times, with the tyranical Lord Drace oppressing the fair village people." << endl <<  "You are the villages last hope, a hero from a nearby village have been sent to wipeout Drace" << endl << "from his castle high on the hills." << endl << "Can you save the village people before its too late?" << endl;
     cout << endl;
     cout << "but first, who are you?" << endl << endl;

     // a string array filled with the characters the user can select is created. Allowing a loop to be made to list the possible characters to the user. preventing too much repitition in the code.
     string characters[6] = {"Brute","Warlock","Goblin","Warrior","Shieldsman","Thief"};
     string descriptions[6] = {"The Brute has never lost a fight in his life, in hand to hand combat his raw strength is unmatched. Unluckily with his immense power comes a lack of speed.", "The Warlock has been training to wield magic since birth, he is a fragile fighter but can dish out a lot of damage quick.", "The Goblin is extremely quick, and can catch fighters off guard with rapid counter attacks, but is quite frail.", "The Warrior is skilled in every aspect of combat, a well rounded fighter.", "The Shieldsman has perfected the art of shield combat, using her trusty shield for both offense and defence", "The Thief uses stealth to his advantage, attacking before the enemy is aware of his presence gives him the upper hand going into fights."};
     for(int i = 0; i < 6; i++){
         cout << i+1 << ". " << characters[i] << ":" << endl << descriptions[i] << endl << endl;
     }
     // Asking the user for thei input for which character they wish to play and using a switch statement to use the right class.
     char choice = 0;
     cout << "please input the number corresponding to the class you want to play." << endl;
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
        Thief player;
        user = player;
        cout << "you have chosen the Thief class" << endl;
        break;
        default:
        Warrior player;
        user player;
        cout << "by default the Warrior class has been chosen" << endl;

        // Outputting the story, and using cin to ask the user to pick their path when the story begins, this will change what enemies they face.ccczxghd
        cout << endl << "As you approach the castle, you spot a cave near the side of the castle walls." << endl << "a quick search of this cave reveals a hidden entrance into the castles dungeons." << endl; << "you make your way through to the dungeon and are instantly met with a decison." << endl << "do you decide to move or down from the dungeons? " << endl << "1 for up, 2 for down" << endl;
        int UorD;
        cin >> UorD;
        // Changing the story based off the input from the user.
        if(UorD == 1){
            cout << endl << endl << "you travel upstairs to the main halls of the castle, as you travel the halls you are met by a knight in black armour" << endl << "an undead knight! a story of legend brought to life?" << endl << "nevermind that right now, you've got a batle to win!" << endl;
        }
        else{
            cout << endl << endl << "you travel furhter into the depths of the castles dungeons, as you travel furter and further lower, you reach a large open cavern" << endl << "in the darkness you spot a dark figure walking towards you" << endl << "as it walks into the light you spot its hollow body, its a skeleton!" << endl << "how is this even possble? your thoughts are quickly interupted" << endl << "this is no time to ponder, its time to fight!" << endl;
            }
        return UorD;
    }
}

// function that will execute all the code required to run the game through completely.
void Game::run(){
    int decide = 0;
    // running the start of the game.
    decide = startMenu();
    Lord Drace;
    // starting the fight based off the decision in the start.
    if(decide == 1){
    undeadKnight undead_1;
    startFight(user, undead_1);
    }
    else{
    Skeleton skeleton_1;
    startFight(user, skeleton_1);
    }
    // running the mid game and starting the second fights of the story.
    midGame();
    if(decide == 1){
    undeadKnight undead_2;
    startFight(user, undead_2);
    }
    else{
    Skeleton skeleton_2;
    startFight(user, skeleton_2);
    }
    // running the end of the story both pre and post boss, with the boss fight in between.
    endGame();
    startFight(user, Drace);
    final();
}

// the story outputted in the terminal to show to user what is happening in the story between the first and second fight.
void Game::midGame(){
    cout << "as the creature fell to the ground, an eerie sound bellowed from deep in the castle" << endl << "not wanting to get caught by another creature you run away, searching for any traces of Lord Drace as you do" << endl;
    cout << "you see a bright red light in the distance, as you go to investigate the source to the light, you are ambushed!" << endl << "A creature identical to the first drops from the roof, with no time to think you jump into another battle!" << endl;

}

// the story outputted in the terminal after the second fight up until the boss fight showing the user the story.
void Game::endGame(){
    cout << "Now with time to examine the light source, you discover that the light is coming from a portal" << endl << "not trusting the portal, you go to shut it down when a wave of enemies come rushing into the room" << endl << "acting quick you run into the portal and shut it down from the other side" << endl;
    cout << "once you calm down, you realise the massive throne sitting across the room, at the top a dark figure sits" << endl << endl << "without a word, the dark figure stands up, and springs off the throne towards you" << endl << "you get a quick glimps as the figure passed through the light, its Lord Drace himself!" << endl << "lets hope you have what it takes to take him dowm!" << endl << endl;
}

// the final part of the story shown to the user after they beat the Lord Drace boss.
void Game::final(){
    cout << "with the death of Lord Drace, the village people were once again free people" << endl << "The castle was taken down and the materials were used to build a wall around the village to keep the villagers safe" << endl << "you were praised as the hero of the village, all the village people look up to you" << endl << endl << "so what journey comes next? " << endl;
}

// a function that can be called that will stop the game from running any further.
void Game::end(){
    running = 0;
    //exit or abort function?
    exit
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

// The function that starts a fight between a player and a computer class.
void Game::startFight(Player &_user, Computer &_enemy){
    int userCurrentSpeed = _user.getSpeed();
    int enemyCurrentSpeed = _enemy.getSpeed();

    int playerIndex = 0;
    int enemyIndex = 0;
    // checking to make sure both fighters are still alive to continue the fight.
    while (_user.isDead() == false && _enemy.isDead() == false){
        // displaying moves to the user, letting them chose a move and choosing a move for the enemy.
        _user.displayMoves();
        _user.inputMove();
        _enemy.inputMove();

        // using the moves that the user chose and the computer was randomly allocated.
        _user.useMove(_user.getChosenMove(), _enemy);
        _enemy.useMove(_enemy.getChosenMove(), _user);

        //displaying the health of the users character and the enemy to the user.
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
    // ending the game if the users character dies.
    if (_user.isDead()){
        end();
    }
    // showing the user the enemy was defeated if they beat the enemy.
        else{
        cout << "The " << _enemy.getName() << " was defeated." << std::endl;
    }
}

// default contructor.
Game::Game(){
    Player _user;
    running = 0;
    user = _user
}

// default deconstructor.
Game::~Game(){

}

