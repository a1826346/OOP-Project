#include "Thief.h"

// Basic constructor with low to average health, very high speed, and low magic.
Thief::Thief(){
    maxHealth = 50;
    currentHealth = maxHealth;
    speed = 10;
    magicMax = 20;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Thief";
    generateMoves();
}

Thief::generateMoves(){
    // Sneak Attack is a medium damage, high crit, mostly accurate basic move.
    Move sneakAttack;
    sneakAttack.setMoveName("Sneak Attack");
    sneakAttack.setDescription("...");
    sneakAttack.setActionText("...");
    sneakAttack.setMagicCost(0);
    sneakAttack.setDamage(20);
    sneakAttack.setHitChance(90);
    sneakAttack.setCritChance(40);
    sneakAttack.setHealAmount(0);
    sneakAttack.setSpeed(10);
    moveList[0] = sneakAttack;

    // Foot Sweep is a low damage, super high crit, completely accurate basic move.
    Move footSweep;
    footSweep.setMoveName("Foot Sweep");
    footSweep.setDescription("...");
    footSweep.setActionText("...");
    footSweep.setMagicCost(0);
    footSweep.setDamage(10);
    footSweep.setHitChance(100);
    footSweep.setCritChance(60);
    footSweep.setHealAmount(0);
    footSweep.setSpeed(9);
    moveList[1] = footSweep;

    // Shadow Rune is a one off super powerful move, completely accurate, with a medium crit chance magic attack.
    Move shadowRune;
    shadowRune.setMoveName("Rune of Shadows");
    shadowRune.setDescription("...");
    shadowRune.setActionText("...");
    shadowRune.setMagicCost(20);
    shadowRune.setDamage(150);
    shadowRune.setHitChance(100);
    shadowRune.setCritChance(25);
    shadowRune.setHealAmount(0);
    shadowRune.setSpeed(4);
    moveList[2] = shadowRune;

    // Shadow attacks is a medium damage, mostly accurate, high crit basic attack.
    Move shadowAttack;
    shadowAttack.setMoveName("Into the Shadows");
    shadowAttack.setDescription("...");
    shadowAttack.setActionText("...");
    shadowAttack.setMagicCost(0);
    shadowAttack.setDamage(30);
    shadowAttack.setHitChance(90);
    shadowAttack.setCritChance(50);
    shadowAttack.setHealAmount(0);
    shadowAttack.setSpeed(7);
    moveList[3] = shadowAttack;
}

// default deconstructor.
Thief::~Thief(){

}