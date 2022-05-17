#include "Warlock.h"

Warlock::Warlock(){
    maxHealth = 40;
    currentHealth = maxHealth;
    speed = 6;
    magicMax = 1000;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Warlock";
    generateMoves();
}

void Warlock::generateMoves(){

    Move energyBeam;
    energyBeam.setMoveName("Energy Beam");
    energyBeam.setDescription("...");
    energyBeam.setActionText("...");
    energyBeam.setMagicCost(20);
    energyBeam.setDamage(5);
    energyBeam.setHitChance(100);
    energyBeam.setCritChance(25);
    energyBeam.setHealAmount(0);
    energyBeam.setSpeed(2);
    moveList[0] = energyBeam;

     Move fireball;
    fireball.setMoveName("fireball");
    fireball.setDescription("...");
    fireball.setActionText("...");
    fireball.setMagicCost(30);
    fireball.setDamage(10);
    fireball.setHitChance(90);
    fireball.setCritChance(25);
    fireball.setHealAmount(0);
    fireball.setSpeed(4);
    moveList[1] = fireball;

     Move acidRain;
    acidRain.setMoveName("Acid Rain");
    acidRain.setDescription("...");
    acidRain.setActionText("...");
    acidRain.setMagicCost(70);
    acidRain.setDamage(30);
    acidRain.setHitChance(80);
    acidRain.setCritChance(40);
    acidRain.setHealAmount(0);
    acidRain.setSpeed(6);
    moveList[2] = acidRain;

     Move Disintigrate;
    Disintigrate.setMoveName("Disintigrate");
    Disintigrate.setDescription("...");
    Disintigrate.setActionText("...");
    Disintigrate.setMagicCost(100);
    Disintigrate.setDamage(0);
    Disintigrate.setHitChance(60);
    Disintigrate.setCritChance(0);
    Disintigrate.setHealAmount(0);
    Disintigrate.setSpeed(8);
    moveList[3] = Disintigrate;
}

Warlock::~Warlock(){

}