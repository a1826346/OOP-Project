ifndef GOBLIN_H
#define GOBLIN_H

#include "Player.h"

class Goblin : public Player {
    private:
        std::string name = "?";
    public:
        Goblin();
        ~Goblin();
        void generateMoves;
};

#endif //GOBLIN_H