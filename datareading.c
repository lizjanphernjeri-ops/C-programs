/*Njeri lizjanpher 
ct101/G/26467/25
data reading from a binary file
*/


#include <stdio.h>

struct details{
char name;
int REG;
float total_marks;

};

int main(){



FILE *fp;
fp = fopen("details.bin","rb");
struct details data;

if(fp == NULL){

    printf("error opening file");
    return 1;

}
printf("reading file....\n");


fread(&data, sizeof(struct details),1,fp);

printf("name:%c\n",data.name);
printf("REG:%d\n",data.REG);
printf("total_marks:%.2f\n",data.total_marks);

fclose(fp);
printf("file closed successfully");

 return 0;


}