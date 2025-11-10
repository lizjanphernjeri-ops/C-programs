/*
Njeri lizjanpher 
CT101/G/26467/25
SIMPLE INTREST
*/

#include <stdio.h>


int main(){
    
    float principal,rate, time;
    float simple_intrest;

printf("enter the principal; ");
scanf("%f",&principal);
printf("enter the rate; ");
scanf("%f",&rate);
printf("enter the time: ");
scanf("%f",&time);



simple_intrest=(principal*rate*time)/100;


printf("the simple intrest is ksh%.2f\n",simple_intrest);

    return 0;

}