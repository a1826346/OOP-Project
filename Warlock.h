#ifndef WARLOCK_H
#define WARLOCK_H

#include "Player.h"

class Warlock : public Player {
    private:
        //std::string name = "?";
    public:
        Warlock();
        ~Warlock();
        void generateMoves();
};

#endif //WARLOCK_H