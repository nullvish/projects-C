#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x = rand() %100 +1;
    //printf("%d",x);
    int user ;
   
    int guess =0 ;
    while (1){
        ++guess;
        printf("GUESS THE NUMBER BROTHER:\n");
        scanf("%d",&user);
        if (user==x){
            printf("You have guessed it right BROSKIE!!. Your guesses are %d\n",guess);
            break;
        }
        else if (user>x+10){
            printf("Lower number  BROSKIE\n");
        }
        else if (user<x-10){
            printf("Higher number BROSKIE\n");
        }
        else if (user>x){
            printf("You are close broskie! JUST A LITTLE LOWER\n");
        }
        else
        printf("JUST LITTLE HIGHER BROSKIE!\n");
        


    }

    return 0;
}
