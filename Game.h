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

        void startMenu();
        void run();
        bool isRunning();
        void end();
        void startFight(Player &_user, Computer &_enemy);
       
    Game(

    Game(Player character);
    }
};

#endif //GAME_H