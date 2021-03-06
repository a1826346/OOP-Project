#include "Warrior.h"

// Basic Constructor with medium to high health, medium magic and low speed.
Warrior::Warrior(){
    maxHealth = 100;
    currentHealth = maxHealth;
    speed = 4;
    magicMax = 100;
    currentMagic = magicMax;
    maxMoves = 4;
    classType = "Warrior";
}

void Warrior::generateMoves(){

    // Stab is a low damage, completely accurate, medium crit basic attack.
    Move stab;
    stab.setMoveName("Stab");
    stab.setDescription("...");
    stab.setActionText("You thrust your sword toward the enemy.");
    stab.setMagicCost(0);
    stab.setDamage(10);
    stab.setHitChance(100);
    stab.setCritChance(25);
    stab.setHealAmount(0);
    stab.setSpeed(2);
    moveList[0] = stab;

    // Spinning Swipe is a low to medium damage, mostly accurate, medium crit basic attack.
    Move swipe;
    swipe.setMoveName("Swinning Swipe");
    swipe.setDescription("...");
    swipe.setActionText("In a spinning motion, you swipe your sword across the enemy's body.");
    swipe.setMagicCost(0);
    swipe.setDamage(25);
    swipe.setHitChance(85);
    swipe.setCritChance(10);
    swipe.setHealAmount(0);
    swipe.setSpeed(6);
    moveList[1] = swipe;

    // Segmentation is a medium to high damage, completely accurate magic attack.
    Move segmentation;
    segmentation.setMoveName("Segmentation");
    segmentation.setDescription("...");
    segmentation.setActionText("You attack the limbs of the enemy in an attempt to separate them from the body.");
    segmentation.setMagicCost(20);
    segmentation.setDamage(30);
    segmentation.setHitChance(90);
    segmentation.setCritChance(0);
    segmentation.setHealAmount(0);
    segmentation.setSpeed(1);
    moveList[2] = segmentation;

    // Uppercat Swipe is a medium damage, mostly accurate, extremely high crit, magic attack.
    Move uppercut;
    uppercut.setMoveName("Uppercut Swipe");
    uppercut.setDescription("...");
    uppercut.setActionText("You swipe your sword upward in the direction of the enemy's head.");
    uppercut.setMagicCost(10);
    uppercut.setDamage(35);
    uppercut.setHitChance(80);
    uppercut.setCritChance(15);
    uppercut.setHealAmount(0);
    uppercut.setSpeed(4);
    moveList[3] = uppercut;
}

// Basic deconstructor.
Warrior::~Warrior(){

}