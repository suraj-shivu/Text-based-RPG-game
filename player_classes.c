

#include<stdio.h>
#include<string.h>
#include"player_classes.h"

//create and allocate class to main character


myClasses selectChar(int choice){
  //defining struct to be returned
  myClasses base_class;
  /*
  Max starting parameters to give a scale idea
  health - 1 to 500
  defense - 1 to 20
  intellect - 1 to 100
  luck - 1 to 100
  attack - 1 to 100
  */
  if(choice == 1){
    //Knight
    base_class.health = 500;
    base_class.defense = 20;
    base_class.intellect = 10;
    base_class.luck = 35;
    base_class.attack = 60; }

  if(choice == 2){
    //mercenary
    base_class.health = 350;
    base_class.defense = 12;
    base_class.intellect = 30;
    base_class.luck = 50;
    base_class.attack = 95; }

  if(choice == 3){
    //mage
    base_class.health = 275;
    base_class.defense = 8;
    base_class.intellect = 90;
    base_class.luck = 40;
    base_class.attack = 45; }

  if(choice == 4){
    //assasin
    base_class.health = 425;
    base_class.defense = 15;
    base_class.intellect = 55;
    base_class.luck = 90;
    base_class.attack = 50; }

  if(choice == 5){
    //assasin
    base_class.health = 375;
    base_class.defense = 14;
    base_class.intellect = 50;
    base_class.luck = 45;
    base_class.attack = 50; }

    return base_class;

  }
   character makeChar(){
     character my_player;
    int choice;
    printf("Enter name of your character \n");
    scanf("%s",my_player.name);
    printf("Enter player class : \n ");
    printf("1.Knight \n2.Mercenary \n3.Mage \n4.Assasin \n5.Default \n");
    scanf("%d",&choice);

    if(choice == 1){
      my_player.class = selectChar(1);
    }
    if(choice == 2){
      my_player.class = selectChar(2);
    }
    if(choice == 3){
      my_player.class = selectChar(3);
    }
    if(choice == 4){
      my_player.class = selectChar(4);
    }
    if(choice == 5){
      my_player.class = selectChar(5);
    }
    return my_player;

  }
void game_start(){
    character hero;
    bot immortal;
    hero = makeChar();
    int f=1;
    while(f)
    {   immortal=spawn(0.8);
        if(hero.class.health>0)
        {
            hero=attack(hero,immortal);
        }
        else
        {
            f--;
            printf("Hero has been slain\n");
        }

    }


}

void main_menu(){

  int menu_choice;
  //Prints game name
  printf("------------------------------------------ \n");
  printf("Generic RPG game \n");
  printf("------------------------------------------ \n");

  printf("Main Menu \n");
  printf("1. New game \n0. Exit\n");

  scanf("%d",&menu_choice);
  if(menu_choice == 0){
    printf("Exiting...");
  }
  if(menu_choice ==1){
    printf("Entering new game .........\n");
    game_start();
  }


}
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

bot damage(character hero,bot king)
{
    printf("Enemy has been hit\n");
    if(hero.j==0)                                               //Basic attacks for hero.
    {      king.health-=hero.atk;
           printf("Enemy has lost %3d health\n",hero.atk);
    }
    else
    {     king.health-=hero.class.intellect;
           printf("Enemy has lost %3d health\n",hero.class.intellect);
    }

    return(king);
}

character attack(character hero,bot king)
{                                                               //basic attack by bot.
    printf("hero has been hit\n");
    if(king.j==0)
    {      hero.class.health-=king.strength;
           printf("hero has lost %3.f health\n",king.strength);
    }
    else
    {     hero.class.health-=king.mana;
           printf("hero has lost %3.f health\n",king.mana);
    }

    return(hero);
}



