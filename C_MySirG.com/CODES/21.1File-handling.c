// File Handling: Writing mode
#include<stdio.h>
#include<stdlib.h>
int main(){
    char c[100];
    FILE *fp;
    fp=fopen("RAM.txt","w");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    printf("Enter your data: ");
    gets(c);
    fputs(c,fp);
    fclose(fp);
    return 0;
}
