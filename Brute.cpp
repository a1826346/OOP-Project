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
    hammerSwing.setDamage(15);
    hammerSwing.setHitChance(90);
    hammerSwing.setCritChance(25);
    hammerSwing.setHealAmount(0);
    hammerSwing.setSpeed(4);
    moveList[0] = hammerSwing;

    // Punch attack, low damage, high hit chance, medium crit chance, high speed
    Move punch;
    punch.setMoveName("Punch");
    punch.setDescription("...");
    punch.setActionText("...");
    punch.setMagicCost(0);
    punch.setDamage(10);
    punch.setHitChance(100);
    punch.setCritChance(30);
    punch.setHealAmount(0);
    punch.setSpeed(2);
    moveList[1] = punch;

    // Frenzy attack, medium damage, high hit chance, low crit chance, low speed.
    Move frenzy;
    frenzy.setMoveName("Frenzy");
    frenzy.setDescription("...");
    frenzy.setActionText("...");
    frenzy.setMagicCost(20);
    frenzy.setDamage(25);
    frenzy.setHitChance(90);
    frenzy.setCritChance(0);
    frenzy.setHealAmount(0);
    frenzy.setSpeed(6);
    moveList[2] = frenzy;

    // Heavy Swing attack, high damage, low hit chance, high crit chance, low speed
    Move heavySwing;
    heavySwing.setMoveName("Heavy Swing");
    heavySwing.setDescription("...");
    heavySwing.setActionText("...");
    heavySwing.setMagicCost(0);
    heavySwing.setDamage(25);
    heavySwing.setHitChance(80);
    heavySwing.setCritChance(15);
    heavySwing.setHealAmount(0);
    heavySwing.setSpeed(1);
    moveList[3] = heavySwing;
}

// Basic Deconstructor
Brute::~Brute(){

}