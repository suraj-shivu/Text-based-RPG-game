#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"player_classes.h"
#include<time.h>
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
    base_class.attack = 60;

  }
  if(choice == 2){
    //mercenary
    base_class.health = 350;
    base_class.defense = 12;
    base_class.intellect = 30;
    base_class.luck = 50;
    base_class.attack = 95;
  }
  if(choice == 3){
    //mage
    base_class.health = 275;
    base_class.defense = 8;
    base_class.intellect = 90;
    base_class.luck = 40;
    base_class.attack = 45;
  }
  if(choice == 4){
    //assasin
    base_class.health = 425;
    base_class.defense = 15;
    base_class.intellect = 55;
    base_class.luck = 90;
    base_class.attack = 50; }

  if(choice == 5){
    //def
    base_class.health = 375;
    base_class.defense = 14;
    base_class.intellect = 50;
    base_class.luck = 45;
    base_class.attack = 50;}
    return base_class;


}

character makeChar(){
    character my_player;
    int choice;
    printf("Enter name of your character \n");
    scanf("%s",my_player.name);
    printf("Enter player class : \n ");

    my_player.level=1;
    int chc = 1; int conf = 0;
    while(chc == 1){
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

        printf("Class attributes : \n");
        printf("Health : %d \n",my_player.class.health);
        printf("Defense : %d \n",my_player.class.defense);
        printf("Intellect : %d \n",my_player.class.intellect);
        printf("Luck : %d \n",my_player.class.luck);
        printf("Attack : %d \n",my_player.class.attack);
        printf("\n");
        printf("Press 1 to confirm, 0 to choose again\n");
        scanf("%d",&conf);
        if(conf ==1){
            printf("Class confirmed.\n");
            system("cls");
            chc = 0;
        }

    }
    return my_player;

  }

void game_start(){


    character hero;
    hero = makeChar();

    printf("You have entered Hell.\n The place is dark, gloomy and has a distinct shade of red everywhere.\n The world is yours to explore\n");
    system("pause");
    level1(hero);

    }

void level1(character hero){
    printf("You see a narrow path going over to a distinctly visible volcano.\n ");
    printf("Upon entering this barren path, a demon jumps out of nowhere. It seems it hasn't eaten for days \n");
    system("pause");
    hero=encounter(hero,0);
    printf("You have %d health remaining after your first fight\n",hero.class.health);
    system("pause");
    system("cls");
    printf("You progress  along the path. \n It brings upon a clearance with muddy waters \n");
    printf("There is a mage, battling an archdaemon with his bare staff in the murky waters.\n");
    system("pause");
    printf("You now have 2 choices : \n");
    printf("1.Help him \n2.Ignore him and continue your path towards the volcano\n");
    scanf("%d",&hero.choices[0]);
    printf("You have chosen : %d \n",hero.choices[0]);
    system("pause");

    if(hero.choices[0] ==1){
        printf("You advance forward.\n As soon as you do, the archdaemon picks up the mage and sends him flying towards a cliff.\nThe mage grabs hold of the edge of the cliff.\nThe demon now turns upon you\n");
        system("pause");
        hero  = encounter(hero,0);
        printf("You bask in triumph and help the mage get up\n");
        printf("Mage : Thanks for saving my life, that demon almost got me \n");
        printf("Mage : Here, take this for your pain and suffering. \n");
        system("pause");
        printf("You receive a HEALING_POTION. It restores your health by 350 hp.\n");
        hero.class.health += 350.0;
        printf("You now have %d health\n",hero.class.health);
        system("pause");
        system("cls");
        printf("The mage creates a portal and vanishes before the player has a chance to ask about what is going on in this dark world\n");
        system("pause");
        system("cls");

    }

    if(hero.choices[0]==2){
        printf("You flee away from the sight of the demon, proving yourself a coward from the mage's perception. \n ");
        printf("The demon snatches the mage and crushes him. He lets out an agonizing scream and pleads for help\n");
        printf("The mage's life withers in front of your own eyes and he dies a painful death\n");
        printf("The demon now turns to you\n");
        printf("DEMON : Hmm, another fool. This will be fun.\n");
        system("pause");
        hero = encounter(hero,0);
        printf("The player looks at his bloodied hands and the dead demon beside him\n");
        printf("The player stumbles upon the mage's corpse and is filled with extreme regret. He knows he could have saved the mage but chose not to. \n");
        printf("Player skins the demon and gets a hide which increases his defense by 5\n");
        hero.class.defense+= 5;
        printf("Player defense : %d \n",hero.class.defense);

    }
    system("pause");
    system("cls");
    printf("You venture forward along the dingy path and see a grand arena, complete with spectators.\n");
    printf("You glance upon the creatures fighting inside the arena. They had four arms , were very thin and had tentacles sprouting from their back\n");
    printf("You have 2 options now : ");
    printf("Press 1 to partake in the arena duels or 2 to move forward and ignore the creatures \n");
    scanf("%d",&hero.choices[2]);

    if(hero.choices[2] == 1){
        system("pause");
        printf("You have challenged the creatures, or lemoids, as they called themselves to a basic duel. Five of them come forward to batter you to death.\n");
        system("pause");
        encounter(hero, 0.7);
        printf("Creature 2 comes forward");
        system("pause");
        encounter(hero,0.7);
        printf("Creature 3 comes forward");
        system("pause");
        encounter(hero,0.7);
        printf("Creature 4 comes forward");
        system("pause");
        encounter(hero,0.7);
        printf("Creature 5 comes forward");
        system("pause");
        encounter(hero,0.7);
        printf("The five lemoids have fainted and cannot battle any more\n");
        printf("The lemoids are impressed by your skills and decide to give you an award\n");
        printf("An elder lemoid comes and casts a protection spell on you, granting you more defense and health");
        hero.class.health += 200;
        hero.class.defense +=2;
        printf("Your new health : %d",hero.class.health);
        printf("Your new defense : %d",hero.class.defense);
        system("pause");
    }

    else if(hero.choices[2] == 2){
        system("cls");
        printf("You go away, not feeling sure whether you'll be able to take those creatures head on.\n");

    }

    system("cls");
    printf("You proceed deeper along the path, the volcano coming into clear view now \n");
    printf("You feel unsure about this, whether coming into the cursed place was a good idea from the beginning\n");
    printf("You are, however, motivated by your goal of clearing the path and stroll on......");
    // level 2 function call;

}




void main_menu(){

  int menu_choice;
  //Prints game name
  printf("------------------------------------------ \n");
  printf("---------------Devil's Tomb------------------ \n");
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
{   bot enemy;
    enemy.bossname="Meliodas";                           //final boss map 1 will have rate 1.
    enemy.health=200*rate;                               //boss has been defined for map 1.
    enemy.lifebars=4;                                    //Minions of boss have rate less than 1.
    enemy.level=15*rate;
    enemy.race="Demon";
    enemy.mana=150*rate;
    enemy.strength=80*rate;
    enemy.j=0;
    return(enemy);
}

bot damage(character hero,bot enemy)
{
    int var_ = (int) (ranGen()*10 -5.0);

    if(hero.j==0)                                               //Basic attacks for hero.
    {
            enemy.health-=(hero.class.attack+var_);
            printf("Enemy hit \n");
            if(enemy.health > 0){
                printf("Enemy has lost %3d health and has %.1f health remaining \n",hero.class.attack+var_, enemy.health);
           }
        else printf("Enemy is defeated\n");
    }
    else
    {     enemy.health-=(hero.class.intellect+var_);
            printf("Enemy hit \n");
           if(enemy.health > 0){
           printf("Enemy has lost %3d health and has %.1f health remaining \n",hero.class.intellect+var_, enemy.health);
           }
            else printf("Enemy is defeated \n");

    }
    return(enemy);
}

character attack(character hero,bot enemy)
{                                                               //basic attack by bot.
    if(enemy.j==0)
    {      hero.class.health =  hero.class.health - (enemy.strength - hero.class.defense);
            printf("player was hit \n");
            if(hero.class.health > 0){
           printf("player has lost %3.f health and has %d health remaining \n",enemy.strength, hero.class.health);
            }
            else {
                    printf("player is defeated \n");
                    game_over(hero);
            }
    }
    else
    {     hero.class.health-=(enemy.mana-hero.class.defense);
            printf("player was hit \n");
           if(hero.class.health > 0){
           printf("player has lost %3.f health and has %d health remaining\n",enemy.mana,hero.class.health);
           }
            else {
                    printf("player is defeated \n");
                    game_over(hero);
            }
    }

    return(hero);
}

void game_over(character hero){
    int c;
    printf("You have been defeated\n");
    printf("Press 1 for starting the level again and 2 to exit : \n");
    scanf("%d",&c);
    if(c==1){
        //Load game implementation here
    }
    if(c==2){
        printf("exiting \n");
        exit(0);
    }

}

character encounter(character hero,float mod)                         // Function for enemy fights and encounters
{   bot enemy;
    int turn=0;
    if(mod =0 ){
    enemy=spawn(1.0 - (hero.class.luck/100.0)*ranGen());
    }
    else{
        enemy = spawn(1.0 - mod);
    }

    while(hero.class.health>0 && enemy.health>0.0)
    {    system("cls");
           if(turn==0)
        {   printf("You get to attack\n Type 0 for normal attack \t Type 1 for magic attack\n");
            scanf("%d",&hero.j);
            enemy=damage(hero,enemy);
            turn=1;
        }
        else
        {   printf("You have been attacked\n");
            hero=attack(hero,enemy);
            turn=0;

        }
        system("pause");

    }

    return(hero);
}
float ranGen(){
  srand(time(0));
  return (rand() % (100) + 1)/100.0;


}
