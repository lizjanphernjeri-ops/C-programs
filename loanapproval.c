/*
name: lizjanpher njeri
reg no CT101/G/26467/25
subject: write a program that prompts the user to write his salary and age  to test whether he qualifies fir a loan
unit intro to programming and problem solving
*/
#include  <stdio.h>
int main(){
	int age;
double salary;
	printf("enter yor age:");
	scanf("%d",&age);
	printf("enter salary:");
	scanf("%lf",&salary);
	if (salary >=21000 && age >=21)

{	printf(" congratulations you qualify for the loan");}
	else{
		printf("unfortunately we are unable to offer you a loan at this time");}
	
	return 0;
}