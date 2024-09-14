// File Handling: writing mode(fwrite())
#include<stdio.h>
#include<stdlib.h>
struct book{
    int bookid;
    char name[100];
    float price;
}b1;
int main(){
    FILE *fp;
    fp=fopen("RAM.txt","a");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    printf("Enter book id: ");
    scanf("%d",&b1.bookid);
    printf("Enter book name: ");
    scanf("%s",&b1.name);
    printf("Enter book id: ");
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    return 0;
}