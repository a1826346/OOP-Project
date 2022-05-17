#include "Shieldsman.h"

Shieldsman::Shieldsman(){
    maxHealth = 120;
    currentHealth = maxHealth;
    speed = 2;
    magicMax = 100;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Shieldsman";
    generateMoves();
}

void Shieldsman::generateMoves(){

    Move shieldBash;
    shieldBash.setMoveName("Shield Bash");
    shieldBash.setDescription("...");
    shieldBash.setActionText("...");
    shieldBash.setMagicCost(0);
    shieldBash.setDamage(5);
    shieldBash.setHitChance(100);
    shieldBash.setCritChance(25);
    shieldBash.setHealAmount(0);
    shieldBash.setSpeed(2);
    moveList[0] = shieldBash;

    Move spearThrow;
    spearThrow.setMoveName("Spear Throw");
    spearThrow.setDescription("...");
    spearThrow.setActionText("...");
    spearThrow.setMagicCost();
    spearThrow.setDamage(10);
    spearThrow.setHitChance(90);
    spearThrow.setCritChance(25);
    spearThrow.setHealAmount(0);
    spearThrow.setSpeed(2);
    moveList[1] = spearThrow;

    Move spiritShield;
    spiritShield.setMoveName("Spirit Shield");
    spiritShield.setDescription("...");
    spiritShield.setActionText("...");
    spiritShield.setMagicCost(20);
    spiritShield.setDamage(25);
    spiritShield.setHitChance(100);
    spiritShield.setCritChance(0);
    spiritShield.setHealAmount(0);
    spiritShield.setSpeed(6);
    moveList[2] = spiritShield;

    Move shieldTornado;
    shieldTornado.setMoveName("Shield Tornado");
    shieldTornado.setDescription("...");
    shieldTornado.setActionText("...");
    shieldTornado.setMagicCost(50);
    shieldTornado.setDamage(100);
    shieldTornado.setHitChance(95);
    shieldTornado.setCritChance(15);
    shieldTornado.setHealAmount(0);
    shieldTornado.setSpeed(10);
    moveList[3] = shieldTornado;
}

Shieldsman::~Shieldsman(){

}