#include<stdio.h>
int main()
{
    char x[50];
    char *p=x;
    printf("please enter an string: ");
    gets(x);// puts will automaticaly gives a new line 
    puts(p);// it acept intire line with white spaces
    printf("%s",x);
    return 0;
}