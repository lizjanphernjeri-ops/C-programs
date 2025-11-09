#include <stdio.h>
/*
Njeri lizjanpher 
CT101/G/26467/25
water unit cost
*/


int main()
{


float units;
float cost;

printf(" enter water units consumed:");
scanf("%f",&units);


if( units <=30){
cost=units* 20;}
else if(units>30,units<=60){
cost=units*25;}
else if(units>60){
cost=units*30;}



printf(" water units consumed %.4f\n",units);
printf(" total water bill %.2f KES", cost);
return 0;



return 0;
}