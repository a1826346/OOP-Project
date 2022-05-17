#include "Thief.h"

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

Thief::~Thief(){

}