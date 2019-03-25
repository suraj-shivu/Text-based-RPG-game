typedef struct myClass{
  // base = {"knight", "mercenary","mage","assasin","Default"};

  int health;
  int defense;
  int intellect;
  int luck;
  int attack;

}myClasses;

// main character structure
typedef struct characters {
  char name[20];
  myClasses class;
  int  level;                 //Made traits into static for declaration only once
  int j;

}character;
//Game Story structure

myClasses selectChar(int choice);
character makeChar();
void main_menu();
void game_start();

typedef struct enemy{
    float health,level,lifebars,mana,strength;      //Made traits into static for declaration only once
    int j;            // j is a variable used to differ between normal and magic attacks.
    char *bossname,*race;
}bot;
typedef struct game_story{
    character hero;
    bot boss;

}story;


bot spawn(float rate);
bot damage(character hero,bot enemy);
character attack(character hero,bot enemy);
character encounter(character hero,float mod);
float ranGen();
void level1(character hero);
character level_2(character player);
character boss_encounter(character player);
character boss_attack(character player,bot boss);
void game_over(character hero);
