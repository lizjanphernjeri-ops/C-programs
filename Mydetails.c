#include<stdio.h>

int main()
{
int phone_number;
int height;
float bank_account_balance;

printf("enter your phone_number:\n");
scanf("%d",&phone_number);
printf("enter your height:\n");
scanf("%d",&height);
printf("enter your bank account balance:\n");
scanf("%f",&bank_account_balance);

printf("this is your phone_number %d \n",phone_number);
printf("this is your height %d \n",height);
printf ("this is your bank_account_balance %f \n",bank_account_balance);
return 0;
}