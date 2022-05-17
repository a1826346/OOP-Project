#ifndef UNDEADKNIGHT_H
#define UNDEADKNIGHT_H

#include "Computer.h"

class UndeadKnight : public Computer {
    private:
    public:
        undeadKnight();
        ~undeadKnight();
        void generateMoves();
};

#endif //UNDEADKNIGHT_H