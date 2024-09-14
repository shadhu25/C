#include<stdio.h>
int main()
{
    char x[50];
    char *P=x;
    printf("please enter an string: ");
    scanf("%s",x);// scanf does not acept white spaces
    printf("%s\n",x);
    scanf("%5s",x);// it will acept ony five charector if given without 
    // white spaces
    printf("%s\n",x);
    printf("%s\n",P);
    return 0;
}