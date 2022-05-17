#include "Warrior.h"

// Basic Constructor with medium to high health, medium magic and low speed.
Warrior::Warrior(){
    maxHealth = 80;
    currentHealth = maxHealth;
    speed = 4;
    magicMax = 100;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Warrior";
    generateMoves();
}

void Warrior::generateMoves{

    // Stab is a low damage, completely accurate, medium crit basic attack.
    Move stab;
    stab.setMoveName("Stab");
    stab.setDescription("...");
    stab.setActionText("...");
    stab.setMagicCost(0);
    stab.setDamage(5);
    stab.setHitChance(100);
    stab.setCritChance(35);
    stab.setHealAmount(0);
    stab.setSpeed(2);
    moveList[0] = stab;

    // Spinning Swipe is a low to medium damage, mostly accurate, medium crit basic attack.
    Move swipe;
    swipe.setMoveName("Swinning Swipe");
    swipe.setDescription("...");
    swipe.setActionText("...");
    swipe.setMagicCost(0);
    swipe.setDamage(15);
    swipe.setHitChance(90);
    swipe.setCritChance(25);
    swipe.setHealAmount(0);
    swipe.setSpeed(6);
    moveList[1] = swipe;

    // Segmentation is a medium to high damage, completely accurate magic attack.
    Move segmentation;
    segmentation.setMoveName("Segmentation");
    segmentation.setDescription("...");
    segmentation.setActionText("...");
    segmentation.setMagicCost(20);
    segmentation.setDamage(65);
    segmentation.setHitChance(100);
    segmentation.setCritChance(0);
    segmentation.setHealAmount(0);
    segmentation.setSpeed(1);
    moveList[2] = segmentation;

    // Uppercat Swipe is a medium damage, mostly accurate, extremely high crit, magic attack.
    Move uppercut;
    uppercut.setMoveName("Uppercut Swipe");
    uppercut.setDescription("...");
    uppercut.setActionText("...");
    uppercut.setMagicCost(10);
    uppercut.setDamage(50);
    uppercut.setHitChance(80);
    uppercut.setCritChance(75);
    uppercut.setHealAmount(0);
    uppercut.setSpeed(4);
    moveList[3] = uppercut;
}

// Basic deconstructor.
Warrior::~Warrior(){

}