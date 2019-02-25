typedef struct items{
    int sword,bow,arrows,food,potion;

}inventory;
typedef struct Players
{
    char name[20],race[8];
    int level,xp,mana,stamina,health;      //Defining player stats.
    inventory one;

} Player;

Player map1(Player);
