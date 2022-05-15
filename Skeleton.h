#ifndef SKELETON_H
#define SKELETON_H

#include "Computer.h"

class Skeleton : public Computer{
    private:
    public:
        Skeleton();
        ~Skeleton();
        void generateMoves();
};

#endif //SKELETON_H