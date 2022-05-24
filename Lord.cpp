#include "Lord.h"

Lord::Lord(){
    name = "Drace";
    maxMoves = 4;
    maxHealth = 450;
}

void Lord::generateMoves(){
    Move deathRune;
    deathRune.setMoveName("Rune of Death");
    deathRune.setActionText("A wave of malevolence washes over you.");
    deathRune.setMagicCost(0);
    deathRune.setDamage(30);
    deathRune.setHitChance(40);
    deathRune.setCritChance(0);
    deathRune.setHealAmount(0);
    deathRune.setSpeed(1);
    moveList[0] = deathRune;

    Move daggerRain;
    daggerRain.setMoveName("Dagger Rain");
    daggerRain.setActionText("Daggers fall from above as if like rain.");
    daggerRain.setMagicCost(0);
    daggerRain.setDamage(15);
    daggerRain.setHitChance(80);
    daggerRain.setCritChance(20);
    daggerRain.setHealAmount(0);
    daggerRain.setSpeed(3);
    moveList[1] = daggerRain;

    Move maceSwing;
    maceSwing.setMoveName("Mace Swing");
    maceSwing.setActionText("Drace wildly swings his mace toward you.");
    maceSwing.setMagicCost(0);
    maceSwing.setDamage(10);
    maceSwing.setHitChance(100);
    maceSwing.setCritChance(0);
    maceSwing.setHealAmount(0);
    maceSwing.setSpeed(5);
    moveList[2] = maceSwing;

    Move regenerate;
    regenerate.setMoveName("Regenerate Health");
    regenerate.setActionText("Drace appears to grow stronger before your very eyes.");
    regenerate.setMagicCost(0);
    regenerate.setDamage(0);
    regenerate.setHitChance(75);
    regenerate.setCritChance(0);
    regenerate.setHealAmount(40);
    regenerate.setSpeed(1);
    moveList[3] = regenerate;
}

Lord::~Lord(){

}