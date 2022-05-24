#include "Skeleton.h"

Skeleton::Skeleton(){
    name = "Skeleton";
    maxMoves = 2;
    maxHealth = 180;
}

void Skeleton::generateMoves(){
    Move stab;
    stab.setMoveName("Stab");
    stab.setActionText("...");
    stab.setMagicCost(0);
    stab.setDamage(5);
    stab.setHitChance(100);
    stab.setCritChance(10);
    stab.setHealAmount(0);
    stab.setSpeed(6);
    moveList[0] = stab;

    Move chargedPunch;
    chargedPunch.setMoveName("Charged Punch");
    chargedPunch.setActionText("...");
    chargedPunch.setMagicCost(0);
    chargedPunch.setDamage(10);
    chargedPunch.setHitChance(80);
    chargedPunch.setCritChance(0);
    chargedPunch.setHealAmount(0);
    chargedPunch.setSpeed(2);
    moveList[0] = chargedPunch;
}

Skeleton::~Skeleton(){

}