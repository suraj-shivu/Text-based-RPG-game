/*
A text based rpg game consisting of a user defined character whose stretgths and weaknesses are unique.
The character progresses through the story and encounters enemies, friends and puzzles.
An integral part of the story is the choices the character makes. Game proceeds depending on it.
*/

#include<stdio.h>
#include<string.h>

struct myClasses{
  // base = {"knight", "mercenary","mage","assasin","Default"};

  int health;
  int defense;
  int intellect;
  int luck;
  int attack;

};

// main character structure
struct character {
  char name[20];
  struct myClasses class;
  int level;
  int exp;
  int atk;
  int health;

};
//create and allocate class to main character


struct myClasses selectChar(int choice){
  //defining struct to be returned
  struct myClasses base_class;
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
  struct character makeChar(){
    struct character my_player;
    int choice;
    printf("Enter name of your character \n");
    scanf("%s",my_player.name);
    printf("Enter player class : \n ");
    printf("1.Knight \n2.Mercenary \n3.Mage \n4.Assasin \5.Default \n");
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


void main_menu(){

  int menu_choice;
  //Prints game name
  printf("------------------------------------------ \n");
  printf("Generic RPG game \n");
  printf("------------------------------------------ \n");

  printf("Main Menu \n");
  printf("1. New game \n0. Exit");

  scanf("%d",&menu_choice);
  if(menu_choice == 0){
    printf("Exiting...");
  }
  if(menu_choice ==1){
    printf("Entering new game .........");
    //game_start();
  }


}

void game_start(){
    struct character player;
    player = makeChar();

}

int main(){

}
