#ifndef BRUTE_H
#define BRUTE_H

#include "Player.h"

class Brute : public Player{
    private:
        // std::string name = "?";
    public:
        Brute();
        ~Brute();
        void generateMoves();
};

#endif //BRUTE_H