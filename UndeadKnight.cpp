#include "UndeadKnight.h"

UndeadKnight::UndeadKnight(){
    name = "Undead Knight";
    maxMoves = 2;
}

void UndeadKnight::generateMoves(){
    Move strike;
    strike.setMoveName("Strike");
    strike.setActionText("...");
    strike.setMagicCost(0);
    strike.setDamage(5);
    strike.setHitChance(100);
    strike.setCritChance(25);
    strike.setHealAmount(0);
    strike.setSpeed(2);
    moveList[0] = strike;

    Move Overpower;
    Overpower.setMoveName("Overpower");
    Overpower.setActionText("...");
    Overpower.setMagicCost(0);
    Overpower.setDamage(15);
    Overpower.setHitChance(80);
    Overpower.setCritChance(20);
    Overpower.setHealAmount(0);
    Overpower.setSpeed(4);
    moveList[1] = Overpower;
}

UndeadKnight::~UndeadKnight(){

}