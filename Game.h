#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Computer.h"
#include "Brute.h"

class Game{
    protected:
        // a variable that checks to see the game is still running.
        bool running;
        // the player class that the user will choose at the start of the game and use in all the fights.
        Player *user;

    public:
        // basic constructor that sets the game up, no player class initialised as that variable will be filled later.
        Game();
        // basic deconstructor that will delete the user variable as its initialised using dynamic memory (new).
        ~Game();

        // a function that gives the backstory of the game and the player the option of character, and the option to change story progession.
        int startMenu();
        // a function that runs all the functions nessicary to run the game to completion.
        void run();
        // a function that returns the running variable that is protected.
        bool isRunning();
        // a function that ends the game, using the abort function.
        void end();
        // a function that starts a fight between the user and a computer enemy, until one of these enemies is dead.
        void startFight(Player &_user, Computer &_enemy);

        // these functions continue the story from the original start menu sotry, displaying the story to the user through the terminal.
        void midGame();
        void endGame();
        void final();
};

#endif //GAME_H