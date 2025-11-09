/*
Njeri lizlizjanpher 
CT101/G/26467/25
Guessing_game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    
    srand(time(0));
    int number=rand()%20+1;
     
   
 int guess;
printf("enter your guess:");

 int attempts=0;

while(guess!=number){
    
    attempts++;
    
     if(guess>number){
        printf("too high!\n");}
        
     else {printf("too low!\n");}
     
     

    printf("try again:");
    scanf("%d",&guess);
            
        
        }
        
    attempts++;
    

printf("congratulation\n, you got correct in %d guesses",attempts);
return 0;
}