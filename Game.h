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

<<<<<<< HEAD
    bool StartMenu();
    void run();
    bool IsRunning();
    void End();
    void StartFight;

    Game(

    Game(Player character);
    }
=======
        void startMenu();
        void run();
        bool isRunning();
        void end();
        void startFight(Player &_user, Computer &_enemy);
>>>>>>> d358e1f38938e09ad3515100599b15b2d81a954e
};

#endif //GAME_H