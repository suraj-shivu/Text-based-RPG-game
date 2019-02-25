#include<stdio.h>
#include"maps.h"
Player map1(Player mod)
{   printf("You have woken up in a strange place. You dont seem to recollect where you are.\n");
    printf("There seems to be some kind of alien nearby\n");
    mod.health=0;
    return(mod);

}
