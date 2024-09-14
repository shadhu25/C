// File Handling: Reading mode(fgets())
#include<stdio.h>
#include<stdlib.h>
int main(){
    char c[100];
    FILE *fp;
    fp=fopen("RAM.txt","r");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    fgets(c,50,fp);
    printf("%s",c);
    fgets(c,50,fp);
    printf("%s",c);
    fgets(c,50,fp);
    printf("%s\n",c);
    fclose(fp);
    return 0;
}