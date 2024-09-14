// File Handling: reading mode(fscanf())
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    int a,b;
    a=b=7;
    fp=fopen("RAM.txt","r");
    if(fp==NULL){
        printf("Can't open file\n");
        exit(1);
    }
    fscanf(fp,"%d %d",&a,&b);
    printf("%d %d\n",a,b);
    fclose(fp);
    return 0;
}