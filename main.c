#include <stdio.h>
#include "maps.h"
// Text based Role Playing Game

int main(void)
{   int f;
    Player one;
    printf("Main menu\n");
    printf("Press 1 to start game\n");
    printf("Press 2 to end game\n");
    scanf("%d",&f);

    if(f==1)
       {
        while(f){
            one=map1(one);
            if(one.health==0)
               {
                f--;
                printf("You have been slain\n");
               }
        }
       }

    return 0;

}
