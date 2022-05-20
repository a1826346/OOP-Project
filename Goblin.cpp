#include "Goblin.h"

Goblin::Goblin(){
    // Basic constructor with low health, high magic, and high speed.
    maxHealth = 90;
    currentHealth = maxHealth;
    speed = 8;
    magicMax = 200;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Goblin";
}

void Goblin::generateMoves(){

    // Speed Sweep is a low damage, highly accurate, low crit basic attack.
    Move speedSweep;
    speedSweep.setMoveName("Speed Sweep");
    speedSweep.setDescription("...");
    speedSweep.setActionText("...");
    speedSweep.setMagicCost(0);
    speedSweep.setDamage(15);
    speedSweep.setHitChance(90);
    speedSweep.setCritChance(25);
    speedSweep.setHealAmount(0);
    speedSweep.setSpeed(10);
    moveList[0] = speedSweep;

    // Punch is a low damage, high crit, completely accurate basic attack.
    Move punch;
    punch.setMoveName("Punch");
    punch.setDescription("...");
    punch.setActionText("...");
    punch.setMagicCost(0);
    punch.setDamage(10);
    punch.setHitChance(100);
    punch.setCritChance(50);
    punch.setHealAmount(0);
    punch.setSpeed(5);
    moveList[1] = punch;

    // Duplicate is a medium damage, mostly accurate, medium crit, magic attack.
    Move duplicate;
    duplicate.setMoveName("Duplicate");
    duplicate.setDescription("...");
    duplicate.setActionText("...");
    duplicate.setMagicCost(40);
    duplicate.setDamage(20);
    duplicate.setHitChance(90);
    duplicate.setCritChance(25);
    duplicate.setHealAmount(0);
    duplicate.setSpeed(2);
    moveList[2] = duplicate;

    // 1000 daggers is a high damage, low crit chance, low accuracy, magic attack.
    Move multiDagger;
    multiDagger.setMoveName("1000 Daggers");
    multiDagger.setDescription("...");
    multiDagger.setActionText("...");
    multiDagger.setMagicCost(20);
    multiDagger.setDamage(30);
    multiDagger.setHitChance(70);
    multiDagger.setCritChance(30);
    multiDagger.setHealAmount(0);
    multiDagger.setSpeed(5);
    moveList[3] = multiDagger;
}

// Basic Deconstructor.
Goblin::~Goblin(){

}