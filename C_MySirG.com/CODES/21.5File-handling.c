// File Handling: reading mode(fread())
#include<stdio.h>
#include<stdlib.h>
struct book{
    int bookid;
    char name[100];
    float price;
}b1;
int main(){
    FILE *fp;
    fp=fopen("RAM.txt","r");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    while(fread(&b1,sizeof(b1),1,fp)>0){
    printf("%d %s %f \n",b1.bookid,b1.name,b1.price);
    }
    fclose(fp);
    return 0;
}