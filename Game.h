#ifndef GAME_H__
#define GAME_H__

#include <string.h>

class Game
{
    protected:

    bool running;
    Player user;

    public:

    bool StartMenu();
    void run(string direction);
    bool IsRunning();
    void End();
    void StartFight;

};

#endif