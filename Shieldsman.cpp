#include "Shieldsman.h"

// Basic constructor with very high health, low speed and medium magic.
Shieldsman::Shieldsman(){
    maxHealth = 120;
    currentHealth = maxHealth;
    speed = 2;
    magicMax = 100;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Shieldsman";
}

void Shieldsman::generateMoves(){

    // Shield bash is a low damage, medium crit, completely accurate basic attack.
    Move shieldBash;
    shieldBash.setMoveName("Shield Bash");
    shieldBash.setDescription("...");
    shieldBash.setActionText("...");
    shieldBash.setMagicCost(0);
    shieldBash.setDamage(10);
    shieldBash.setHitChance(100);
    shieldBash.setCritChance(25);
    shieldBash.setHealAmount(0);
    shieldBash.setSpeed(2);
    moveList[0] = shieldBash;

    // Spear throw is a low damage, medium crit, mostly accurate basic attack.
    Move spearThrow;
    spearThrow.setMoveName("Spear Throw");
    spearThrow.setDescription("...");
    spearThrow.setActionText("You accurately throw your spear toward the enemy.");
    spearThrow.setMagicCost(0);
    spearThrow.setDamage(15);
    spearThrow.setHitChance(90);
    spearThrow.setCritChance(0);
    spearThrow.setHealAmount(0);
    spearThrow.setSpeed(2);
    moveList[1] = spearThrow;

    // Spirit shield is a medium damage, completely accurate, magic attack.
    Move spiritShield;
    spiritShield.setMoveName("Spirit Shield");
    spiritShield.setDescription("...");
    spiritShield.setActionText("A spirit shield is sent forth, slamming into the enemy.");
    spiritShield.setMagicCost(20);
    spiritShield.setDamage(25);
    spiritShield.setHitChance(100);
    spiritShield.setCritChance(0);
    spiritShield.setHealAmount(0);
    spiritShield.setSpeed(6);
    moveList[2] = spiritShield;

    // Shield tornado is a high damage, not accurate, high crit basic attack.
    Move shieldTornado;
    shieldTornado.setMoveName("Shield Tornado");
    shieldTornado.setDescription("...");
    shieldTornado.setActionText("You swing your shield in a circular motion with all your might.");
    shieldTornado.setMagicCost(0);
    shieldTornado.setDamage(30);
    shieldTornado.setHitChance(70);
    shieldTornado.setCritChance(35);
    shieldTornado.setHealAmount(0);
    shieldTornado.setSpeed(5);
    moveList[3] = shieldTornado;
}

// Basic deconstructor.
Shieldsman::~Shieldsman(){

}