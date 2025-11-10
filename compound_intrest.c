/*
Njeri lizjanpher
CT101/G/26467/25
COMPOUND INTREST
*/

#include <stdio.h>
#include <math.h>


int main(){

  
    float principal,rate, time;
    float simple_intrest,compound_intrest;
    
printf("enter the principal; ");
scanf("%f",&principal);
printf("enter the rate; ");
scanf("%f",&rate);
printf("enter the time: ");
scanf("%f",&time);


compound_intrest=principal*pow((1+rate/100),time);


printf("the compound intrest is ksh%.2f\n",compound_intrest);

return 0;
}
