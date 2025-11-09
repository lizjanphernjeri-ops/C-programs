/*
CT101/G/26467/25
Njeri lizjanpher
HOTEL REVENUE MANAGEMENT
*/



#include <stdio.h>
int main(){
float revenue[7],total=0,average;
int count=0, day=1;


printf("enter the daily revenue generated:\n");


for(count;count<7; count++){
scanf("%f",&revenue[count]);
total=total+revenue[count];
printf("day %d revenue is ksh%.2f\n",day,revenue[count]);
day++;
}

average=total/7;


printf("the total weekly revenue generated is equal to ksh%.2f\n",total);
printf("the average daily revenue is ksh%.2f\n",average);

return 0;

}