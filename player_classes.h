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
  int level;
  int exp;
  int atk;
  int health;
  int j;

}character;

myClasses selectChar(int choice);
character makeChar();
void main_menu();
void game_start();

typedef struct enemy{
    float health,level,lifebars,mana,strength;
    int j;            // j is a variable used to differ between normal and magic attacks.
    char *bossname,*race;
}bot;

bot spawn(float rate);
bot damage(character hero,bot king);
character attack(character hero,bot king);

