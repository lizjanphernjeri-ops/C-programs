#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;

    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);

    
    if (grossPay <= 300)
        tax = grossPay * 0.15;
    else
        tax = (300 * 0.15) + ((grossPay - 300) * 0.20);

    netPay = grossPay - tax;

    printf("\nGross Pay: %.2f", grossPay);
    printf("\nTaxes: %.2f", tax);
    printf("\nNet Pay: %.2f\n", netPay);

    return 0;
}