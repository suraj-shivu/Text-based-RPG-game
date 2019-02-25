#include<stdio.h>
#include"maps.h"

Player map1(Player mod)
{   printf("You have woken up in a strange place. You dont seem to recollect where you are.\n");
    printf("There seems to be some kind of alien nearby\n");
    mod.health=0;
    return(mod);

}
// Functions for enemy mechanics
bot spawn(float rate)           //rate is based on random function mechanics to be defined later.
{   bot king;
    king.bossname="Meliodas";                           //final boss map 1 will have rate 1.
    king.health=200*rate;                               //boss has been defined for map 1.
    king.lifebars=4;                                    //Minions of boss have rate less than 1.
    king.level=15*rate;
    king.race="Demon";
    king.mana=150*rate;
    king.strength=100*rate;
    king.j=0;
    return(king);
}

bot damage(Player hero,bot king)
{
    printf("Enemy has been hit");
    if(hero.j==0)                                               //Basic attacks for hero.
    {      king.health-=hero.strength;
           printf("Enemy has lost %3d health",hero.strength);
    }
    else
    {     king.health-=hero.mana;
           printf("Enemy has lost %3d health",hero.mana);
    }

    return(king);
}

Player attack(Player hero,bot king)
{                                                               //basic attack by bot.
    printf("hero has been hit");
    if(king.j==0)
    {      hero.health-=king.strength;
           printf("Enemy has lost %3.f health",king.strength);
    }
    else
    {     hero.health-=king.mana;
           printf("Enemy has lost %3.f health",king.mana);
    }

    return(hero);
}

