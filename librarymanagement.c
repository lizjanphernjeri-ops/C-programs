/*
Njeri lizjanpher 
CT101/G/26467/25

*/

#include <stdio.h>
#include <string.h>

int main(){
FILE *library;
library=fopen("borrowed_books.txt", "a");


if(library==NULL){
    printf("error opening file\n");
    return 1;}
    char book[20];
    int number_books=1;

    printf("how many books are borrowed: ");
    scanf("%d",&number_books);
    getchar();
    
     printf("enter the title for the books borrowed:\n");
     for(int i=0;i<number_books;i++){
     fgets(book,20,stdin);
     book[strcspn(book,"\n")]=0;
     fprintf(library,"%s",book);
     
    }



    

    fclose(library);
    printf("\nbook title has been added succensfully");



    return 0;
}