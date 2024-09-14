// File Handling: Reading mode(fgetc())
#include<stdio.h>
#include<stdlib.h>
int main(){
    char c;
    FILE *fp;
    fp=fopen("RAM.txt","r");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    while(fp!=NULL){
        c=fgetc(fp);
        printf("%c",c);
    }
    printf("\n");
    fclose(fp);
    return 0;
}