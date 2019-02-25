typedef struct items{
    int sword,bow,arrows,food,potion;

}bag;
typedef struct Players
{
    char name[20],race[8];
    int level,xp,mana,health,strength,j;      //Defining player stats.
    bag one;                                          // j is a variable used to differ between normal and magic attacks.

} Player;

Player map1(Player);

typedef struct enemy{
    float health,level,lifebars,mana,strength;
    int j;            // j is a variable used to differ between normal and magic attacks.
    char *bossname,*race;
}bot;

bot spawn(float rate);
bot damage(Player hero,bot king);
Player attack(Player hero,bot king);
