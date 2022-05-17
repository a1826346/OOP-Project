#ifndef UNDEADKNIGHT_H
#define UNDEADKNIGHT_H

#include "Computer.h"

class UndeadKnight : public Computer {
    private:
    public:
        UndeadKnight();
        ~UndeadKnight();
        void generateMoves();
};

#endif //UNDEADKNIGHT_H