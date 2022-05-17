#include "Warlock.h"

// Basic Constructor with very low health, medium speed and super high magic.
Warlock::Warlock(){
    maxHealth = 50;
    currentHealth = maxHealth;
    speed = 6;
    magicMax = 1000;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Warlock";
    generateMoves();
}

void Warlock::generateMoves(){

    // Energy Beam is a low magic cost, low damage, completely accurate, medium crit attack.
    Move energyBeam;
    energyBeam.setMoveName("Energy Beam");
    energyBeam.setDescription("...");
    energyBeam.setActionText("...");
    energyBeam.setMagicCost(20);
    energyBeam.setDamage(10);
    energyBeam.setHitChance(100);
    energyBeam.setCritChance(25);
    energyBeam.setHealAmount(0);
    energyBeam.setSpeed(2);
    moveList[0] = energyBeam;

    // Fireball is a medium damage, mostly accurate, magic attack.
    Move fireball;
    fireball.setMoveName("fireball");
    fireball.setDescription("...");
    fireball.setActionText("...");
    fireball.setMagicCost(30);
    fireball.setDamage(30);
    fireball.setHitChance(90);
    fireball.setCritChance(25);
    fireball.setHealAmount(0);
    fireball.setSpeed(4);
    moveList[1] = fireball;

    // Acid Rain is a high magic cost, high attack, mostly accurate, high crit attack.
    Move acidRain;
    acidRain.setMoveName("Acid Rain");
    acidRain.setDescription("...");
    acidRain.setActionText("...");
    acidRain.setMagicCost(70);
    acidRain.setDamage(50);
    acidRain.setHitChance(80);
    acidRain.setCritChance(40);
    acidRain.setHealAmount(0);
    acidRain.setSpeed(6);
    moveList[2] = acidRain;

    // Disintigrate is a high magic cost, high damage, low accuracy attack.
    Move Disintigrate;
    Disintigrate.setMoveName("Disintigrate");
    Disintigrate.setDescription("...");
    Disintigrate.setActionText("...");
    Disintigrate.setMagicCost(100);
    Disintigrate.setDamage(80);
    Disintigrate.setHitChance(60);
    Disintigrate.setCritChance(0);
    Disintigrate.setHealAmount(0);
    Disintigrate.setSpeed(8);
    moveList[3] = Disintigrate;
}

// Basic deconstructor.
Warlock::~Warlock(){

}