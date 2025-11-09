/*
Njeri lizjanpher 
CT101/G/26467/25
CONVERT TEMP
*/

#include <stdio.h>


double converttocelcius(double temparature){

    double celcius=(temparature-32)*5/9;
    return celcius;
}

int main(){
 
double temparature,converted;
 

printf("enter the temparature to convert from farenheit to celcius: ");
scanf("%lf",&temparature);

converted=converttocelcius(temparature);

printf("the temparature in celcius is %.2f",converted);
return 0;
}