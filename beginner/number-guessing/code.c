#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x = rand() %100;
    printf("%d",x);
    int user ;
   
    int guess =0 ;
    while (1){
        ++guess;
        printf("ENTER:");
        scanf("%d",&user);
        if (user==x){
            printf("You have guessed it right . Your guesses are %d",guess);
            break;
        }
        else if (user>x+10){
            printf("Lower number please");
        }
        else if (user<x-10){
            printf("Higher number please");
        }
        else if (user>x){
            printf("You are close broskie! JUST A LITTLE LOWER");
        }
        else
        printf("JUST LITTLE HIGHER BROSKIE!");
        


    }

    return 0;
}
