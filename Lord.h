#ifndef LORD_H__
#define LORD_H

#include "Computer.h"

class Lord : public Computer {
    private:
    public:
        Lord();
        ~Lord()
        void generateMoves();
};

#endif //LORD_H