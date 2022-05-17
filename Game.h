#ifndef GAME_H__
#define GAME_H__

#include <iostream>
#include <string.h>
#include "Player.h"
#include "Computer.h"

class Game{
    protected:
        bool running;
        Player *user;

    public:
        Game();
        ~Game();

        int startMenu();
        void run();
        bool isRunning();
        void end();
        void startFight(Player &_user, Computer &_enemy);
        void midGame();
        void endGame();
        void final()
};

#endif //GAME_H