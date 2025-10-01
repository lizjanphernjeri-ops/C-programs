
#include  <stdio.h>
int main(){
float radius,height,surface_area,pi;
float volume;
printf("enter radius:");
scanf("%f",&radius);
printf("enter height");
scanf("%f",&height);
pi=3.142;
surface_area =2*pi*radius*(height + radius);
//,display the surface area
printf("the surface area is %f",surface_area);
volume = pi *radius *radius *height;
// display volume of a cylinder
printf(" the volume of the cylinder is %f",volume);

	return 0;
}