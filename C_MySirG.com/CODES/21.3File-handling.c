// File Handling: writing mode(fputs())
#include<stdio.h>
#include<stdlib.h>
int main(){
    char c[100]="krishn kant kumar";
    FILE *fp;
    fp=fopen("RAM.txt","w");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    fputs(c,fp);
    fclose(fp);
    return 0;
}