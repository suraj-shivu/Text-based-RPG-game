/*
A text based rpg game consisting of a user defined character whose stretgths and weaknesses are unique.
The character progresses through the story and encounters enemies, friends and puzzles.
An integral part of the story is the choices the character makes. Game proceeds depending on it.
*/

#include<stdio.h>
#include<string.h>

struct character {
  char name[20];
  char class[10];
  int level;
  int exp;
  int atk;
  int health;

};

struct character makeChar(){
  struct character my_player;
  printf("Enter name of your character \n");
  scanf("%s",my_player.name);
  my_player.level = 1;
  my_player.exp = 0;
  my_player.atk = 42;
  my_player.health = 500;
  my_player.class = "Default";

  return my_player;

}

void main_menu(){
  //Prints game name
  printf("------------------------------------------ \n")
  printf("Generic RPG game \n")
  printf("------------------------------------------ \n")

  printf("Main Menu \n");

}

int makeChar(){}
int main(){



}
