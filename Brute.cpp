#include "Brute.h"

// Basic constructor with very high health, medium magic, and very low speed.
Brute::Brute(){
    maxHealth = 150;
    currentHealth = maxHealth;
    speed = 1;
    magicMax = 100;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Brute";
    generateMoves();
}

void Brute::generateMoves(){

    // Hammer Swing attack, medium damage, medium hit chance, medium crit chance, medium speed
    Move hammerSwing;
    hammerSwing.setMoveName("Hammer Swing");
    hammerSwing.setDescription("...");
    hammerSwing.setActionText("...");
    hammerSwing.setMagicCost(0);
    hammerSwing.setDamage(1);
    hammerSwing.setHitChance(100);
    hammerSwing.setCritChance(50);
    hammerSwing.setHealAmount(0);
    hammerSwing.setSpeed(1);
    moveList[0] = hammerSwing;

    // Punch attack, low damage, high hit chance, medium crit chance, high speed
    Move punch;
    punch.setMoveName("Punch");
    punch.setDescription("...");
    punch.setActionText("...");
    punch.setMagicCost(0);
    punch.setDamage(1);
    punch.setHitChance(100);
    punch.setCritChance(50);
    punch.setHealAmount(0);
    punch.setSpeed(1);
    moveList[1] = punch;

    // Frenzy attack, medium damage, high hit chance, low crit chance, low speed, medium healing
    Move frenzy;
    frenzy.setMoveName("Frenzy");
    frenzy.setDescription("...");
    frenzy.setActionText("...");
    frenzy.setMagicCost(10);
    frenzy.setDamage(1);
    frenzy.setHitChance(100);
    frenzy.setCritChance(50);
    frenzy.setHealAmount(1);
    frenzy.setSpeed(1);
    moveList[2] = frenzy;

    // Heavy Swing attack, high damage, low hit chance, high crit chance, low speed
    Move heavySwing;
    heavySwing.setMoveName("Heavy Swing");
    heavySwing.setDescription("...");
    heavySwing.setActionText("...");
    heavySwing.setMagicCost(0);
    heavySwing.setDamage(1);
    heavySwing.setHitChance(100);
    heavySwing.setCritChance(50);
    heavySwing.setHealAmount(0);
    heavySwing.setSpeed(1);
    moveList[3] = heavySwing;
}

// Basic Deconstructor
Brute::~Brute(){

}