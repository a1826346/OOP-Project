#include "Lord.h"

Lord::Lord(){
    name = "Drace";
    maxMoves = 4;

}

void Lord::generateMoves(){
    Move deathRune;
    deathRune.setMoveName("Rune of Death");
    deathRune.setActionText("...");
    deathRune.setMagicCost(0);
    deathRune.setDamage(50);
    deathRune.setHitChance(40);
    deathRune.setCritChance(10);
    deathRune.setHealAmount(0);
    deathRune.setSpeed(1);
    moveList[0] = deathRune;

    Move daggerRain;
    daggerRain.setMoveName("Dagger Rain");
    daggerRain.setActionText("...");
    daggerRain.setMagicCost(0);
    daggerRain.setDamage(25);
    daggerRain.setHitChance(80);
    daggerRain.setCritChance(20);
    daggerRain.setHealAmount(0);
    daggerRain.setSpeed(3);
    moveList[1] = daggerRain;

    Move maceSwing;
    maceSwing.setMoveName("Mace Swing");
    maceSwing.setActionText("...");
    maceSwing.setMagicCost(0);
    maceSwing.setDamage(10);
    maceSwing.setHitChance(100);
    maceSwing.setHealAmount(0);
    maceSwing.setSpeed(5);
    moveList[2] = maceSwing;

    Move regenerate;
    regenerate.setMoveName("Regenerate Health");
    regenerate.setActionText("...");
    regenerate.setMagicCost(0);
    regenerate.setDamage(0);
    regenerate.setHitChance(75);
    regenerate.setHealAmount(40);
    regenerate.setSpeed(1);
    moveList[3] = regenerate;
}

Lord::~Lord(){

}