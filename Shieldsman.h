#ifndef SHIELDSMAN_H
#define SHIELDSMAN_H

#include "Player.h"

class Shieldsman : public Player {
    private:
        std::string name = "?";
    public:
        Shieldsman();
        ~Shieldsman();
        void generateMoves();
};

#endif //SHIELDSMAN