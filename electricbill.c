/*
Njeri lizjanpher 
C101/G/26467/25
ELECTRIC BILL CALCULATOR
*/

#include <stdio.h>

double calculate_electric_bill(double units){
    double total=0;
if(units<=100){
    total=units*10;
}
else if(units>100 && units<=200){
    total=(100*10)+(units-100)*15;
}
else{
    total=(100*10)+(100*15)+((units-200)*20);
    
}

return total;
            
        

}

int main(){

    double units,total;


    printf("enter units consumed: ");
    scanf("%lf",&units);


total=calculate_electric_bill(units);
    
printf("the units consumed are ksh%.2lf",total);

    return 0;

}