// File Handling: writing mode(fprintf())
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    int a,b;
    a=b=7;
    fp=fopen("RAM.txt","w");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    fprintf(fp,"The Sum of %d and %d is %d.",a,b,a+b);
    fclose(fp);
    return 0;
}