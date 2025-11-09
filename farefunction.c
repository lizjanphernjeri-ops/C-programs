/*
Njeri lizjanpher 
CT101/G/26467/25
CALCULATES FARE

*/
#include <stdio.h>


double calculate_fare(double distance){
return distance*50;
}

int main(){

double distance,total;


printf("enter the distance travllled: ");
scanf("%lf",&distance);

total=calculate_fare(distance);

printf("the total fare is ksh%.2lf",total);



    return 0;

}