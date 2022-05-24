#include "Thief.h"

// Basic constructor with low to average health, very high speed, and low magic.
Thief::Thief(){
    maxHealth = 90;
    currentHealth = maxHealth;
    speed = 10;
    magicMax = 20;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Thief";
}

void Thief::generateMoves(){
    // Sneak Attack is a medium damage, high crit, mostly accurate basic move.
    Move sneakAttack;
    sneakAttack.setMoveName("Sneak Attack");
    sneakAttack.setDescription("...");
    sneakAttack.setActionText("You manage to evade the enemy's vision before plunging your blade into them.");
    sneakAttack.setMagicCost(0);
    sneakAttack.setDamage(20);
    sneakAttack.setHitChance(80);
    sneakAttack.setCritChance(40);
    sneakAttack.setHealAmount(0);
    sneakAttack.setSpeed(10);
    moveList[0] = sneakAttack;

    // Foot Sweep is a low damage, super high crit, completely accurate basic move.
    Move footSweep;
    footSweep.setMoveName("Foot Sweep");
    footSweep.setDescription("...");
    footSweep.setActionText("You sweep the enemy's feet with your own, sending them off balance.");
    footSweep.setMagicCost(0);
    footSweep.setDamage(10);
    footSweep.setHitChance(100);
    footSweep.setCritChance(35);
    footSweep.setHealAmount(0);
    footSweep.setSpeed(9);
    moveList[1] = footSweep;

    // Shadow Rune is a one off super powerful move, completely accurate, with a medium crit chance magic attack.
    Move shadowRune;
    shadowRune.setMoveName("Rune of Shadows");
    shadowRune.setDescription("...");
    shadowRune.setActionText("A wave of shadows is sent forth toward the enemy, dealing psychic damage.");
    shadowRune.setMagicCost(20);
    shadowRune.setDamage(120);
    shadowRune.setHitChance(100);
    shadowRune.setCritChance(0);
    shadowRune.setHealAmount(0);
    shadowRune.setSpeed(4);
    moveList[2] = shadowRune;

    // Shadow attacks is a medium damage, not accurate, high crit basic attack.
    Move shadowAttack;
    shadowAttack.setMoveName("Into the Shadows");
    shadowAttack.setDescription("...");
    shadowAttack.setActionText("You emerge from the shadows catching the enemy off-guard with your blade.");
    shadowAttack.setMagicCost(0);
    shadowAttack.setDamage(30);
    shadowAttack.setHitChance(60);
    shadowAttack.setCritChance(60);
    shadowAttack.setHealAmount(0);
    shadowAttack.setSpeed(7);
    moveList[3] = shadowAttack;
}

// default deconstructor.
Thief::~Thief(){

}