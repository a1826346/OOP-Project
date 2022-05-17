#include "Goblin.h"

Goblin::Goblin(){
    maxHealth = 60;
    currentHealth = maxHealth;
    speed = 8;
    magicMax = 200;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Goblin";
    generateMoves();
}

void Goblin::generateMoves(){
    Move speedSweep;
    speedSweep.setMoveName("Speed Sweep");
    speedSweep.setDescription("...");
    speedSweep.setActionText("...");
    speedSweep.setMagicCost(0);
    speedSweep.setDamage(5);
    speedSweep.setHitChance(90);
    speedSweep.setCritChance(15);
    speedSweep.setHealAmount(0);
    speedSweep.setSpeed(10);
    moveList[0] = speedSweep;

    Move punch;
    punch.setMoveName("Punch");
    punch.setDescription("...");
    punch.setActionText("...");
    punch.setMagicCost(0);
    punch.setDamage(1);
    punch.setHitChance(100);
    punch.setCritChance(50);
    punch.setHealAmount(0);
    punch.setSpeed(5);
    moveList[1] = punch;

    Move duplicate;
    duplicate.setMoveName("Duplicate");
    duplicate.setDescription("...");
    duplicate.setActionText("...");
    duplicate.setMagicCost(40);
    duplicate.setDamage(20);
    duplicate.setHitChance(80);
    duplicate.setCritChance(25);
    duplicate.setHealAmount(0);
    duplicate.setSpeed(2);
    moveList[2] = duplicate;

    Move multiDagger;
    multiDagger.setMoveName("1000 Daggers");
    multiDagger.setDescription("...");
    multiDagger.setActionText("...");
    multiDagger.setMagicCost(50);
    multiDagger.setDamage(40);
    multiDagger.setHitChance(70);
    multiDagger.setCritChance(5);
    multiDagger.setHealAmount(0);
    multiDagger.setSpeed(5);
    moveList[3] = multiDagger;
}

Goblin::~Goblin(){

}