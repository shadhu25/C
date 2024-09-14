// prdefined function of string
#include<stdio.h>
// #include<conio.h>
int main(){
    char C[20]="NARAYAN";
    char R[20]="HARI NARAYAN";
    char P[20]="HARI";
    int i=strlen(R);
    printf("Length: %d",i);
    strrev(R);
    puts(R);
    strlwr(C);
    puts(C);
    strupr(C);
    puts(C);
    strcpy(C,P);
    puts(C);
    i=strcmp(C,P);
    printf("Value of strcmp: %d",i);
    strcpy(C,"NARAYAN");
    strcat(P,C);
    puts(P);
    return 0;
}