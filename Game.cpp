#include <iostream>
#include <string.h>

#include "Game.h"

using namespace std;

    bool Game::StartMenu(){
        // Opening text shown to the user, the three new lines at the beginning is to seperate the start of the game from any remaining text in the users terminal.
        cout << endl << endl << endl;
        cout << "The village of Boldan has fallen into dark times, with the tyranical Lord Drace oppressing the fair village people." << endl <<  "You are the villages last hope, a hero from a nearby village have been sent to wipeout Drace" << endl << "from his castle high on the hills." << endl << "Can you save the village people before its too late?" << endl;
        cout << endl;
        cout << "but first, who are you?" << endl << endl;

        // a string array filled with the characters the user can select is created. Allowing a loop to be made to list the possible characters to the user. preventing too much repitition in the code.
        string characters[6] = {"Brute","Warlock","Goblin","Warrior","Shieldsman","ninja"};
        string descriptions[6] = {"The Brute has never lost a fight in his life, in hand to hand combat his raw strenght is unmatched. unluckily with emense power comes a lack of speed.", "The Warlock has been training to wield magic since birth, he is a fragile fighter but can dish out a lot of damage quick.", "The Goblin is extremely quick, and can catch fighters off guard with rapid counter attacks, but is quite frail.", "The Warrior is skilled in every aspect of combat, a well rounded fighter.", "The Shieldsman has perfected the art of shield combat, using her trusty shield for both offense and defence", "The ninja uses stealth to his advantage, attacking before the enemy is aware of his presence gives him the upper hand going into fights."};
        for(int i = 0; i < 6; i++){
            cout << i+1 << ". " << characters[i] << ":" << endl << descriptions[i] << endl << endl;
            char choice = 0;
            cin >> choice;
            switch(choice){
                case '1':
                //smh
                break;
                case '2':
                //smh
                break;
                case '3':
                //smh
                break;
                case '4':
                //smh
                break;
                case '5':
                //smh
                break;
                case '6':
                //smh
                break;
                default:
                //smh

            }
        }

    }

    void Game::Run(){
        StartMenu();
        running = 1;
    }
    void Game::End(){
        running = 0;
        //stop all code
    }
    bool Game::IsRunning(){
        if( running == 1){
            return true;
        }
        else{
            return false;
        }
    }
    void Game::StartFight(Player user, Computer enemy){
        // text to start fight
    }
    
    Game::Game(){
        running = 0;
        user = //default player
    }
    Game::Game(Player character){
        running = 0;
        user = character;
    }
    
    }
    }