#include "UndeadKnight.h"

UndeadKnight::UndeadKnight(){
    name = "Undead Knight";
    maxMoves = 2;
    maxHealth = 180;
}

void UndeadKnight::generateMoves(){
    Move strike;
    strike.setMoveName("Strike");
    strike.setActionText("The Undead Knight strikes you with their clenched fist.");
    strike.setMagicCost(0);
    strike.setDamage(5);
    strike.setHitChance(100);
    strike.setCritChance(0);
    strike.setHealAmount(0);
    strike.setSpeed(2);
    moveList[0] = strike;

    Move Overpower;
    Overpower.setMoveName("Overpower");
    Overpower.setActionText("The Undead Knight overpowers you, swiping you across the room.");
    Overpower.setMagicCost(0);
    Overpower.setDamage(15);
    Overpower.setHitChance(70);
    Overpower.setCritChance(0);
    Overpower.setHealAmount(0);
    Overpower.setSpeed(2);
    moveList[1] = Overpower;
}

UndeadKnight::~UndeadKnight(){

}