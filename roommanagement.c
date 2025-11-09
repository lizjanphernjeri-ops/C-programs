/*
CT1O1/G/26467/25
NJERI LIZJANPHER 
ROOM MANAGEMENT 

*/

#include <stdio.h>
int main(){
int occupancy[5][10];

int floor=1,room=1,total_occupied=0,total_vacant=0;

printf("ENTER THE OCCUPIED ROOMS ON EACH FLOOR");
printf("(1-occpied, 0-vacant)\n");

for(int i=0; i<5 ;i++){
    floor=i+1;
    for(int j=0; j<10;j++){
        room=j+1;
         printf("FLOOR %d | ROOM %d ",floor,room);
         scanf("%d",&occupancy[i][j]);
    }
}



for(int i=0; i<5 ; i++){
    int count=0,occupied=0,vacant=0;
    floor=i+1;
    for( int j=0; j<10;j++){
    
        count++;
        if(occupancy[i][j]==1){
            printf("%-10s","occupied");
            occupied++;

        }
            else{
                printf("%-10s","vacant");
               vacant++; }
               if(count==10){
printf("\n=/In floor %d - occupied %d |vacant %d",floor,occupied,vacant);}
      
        }
total_occupied+=occupied;
total_vacant+=vacant;
  
       printf("\n");
      
    }
 printf("\nTOTAL ON BUILDING OCCUPIED %d| VACANNT %d",total_occupied,total_vacant);
return 0;      
}