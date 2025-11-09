#include <stdio.h>
/*
Njeri lizjanpher 
CT101/G/26467/25
exam eligibility 
*/



int main() {

int average_mark;
int attendance;


printf("enter average mark:");
scanf("%d",&average_mark);
printf("enter attendance:");
scanf("%d",&attendance);


if( average_mark>40 && attendance>=75){
printf("you are eligible");}
else if(average_mark<40 && attendance>=75){
printf(" you are not eligible");}
else if( average_mark>40 && attendance<75){
printf("you are not eligible");}
else if(average_mark<40 && attendance <75){
printf(" you are not eligible");}


return 0;
}