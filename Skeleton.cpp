#include "Skeleton.h"

Skeleton::Skeleton(){
    name = "Skeleton";
    maxMoves = 2;

}

void Skeleton::generateMoves(){
    Move stab;
    stab.setMoveName("Stab");
    stab.setActionText("...");
    stab.setMagicCost(0);
    stab.setDamage(5);
    stab.setHitChance(100);
    stab.setCritChance(25);
    stab.setHealAmount(0);
    stab.setSpeed(2);
    moveList[0] = stab;

    Move chargedPunch;
    chargedPunch.setMoveName("Charged Punch");
    chargedPunch.setActionText("...");
    chargedPunch.setMagicCost(0);
    chargedPunch.setDamage(1);
    chargedPunch.setHitChance(100);
    chargedPunch.setCritChance(50);
    chargedPunch.setHealAmount(0);
    chargedPunch.setSpeed(1);
    moveList[0] = chargedPunch;
}

Skeleton::~Skeleton(){

}