#ifndef THIEF_H
#define THIEF_H

#include "Player.h"

class Thief : public Player {
    private:
        //std::string name = "?";
    public:
        Thief();
        ~Thief();
        void generateMoves();
};

#endif //THIEF_H