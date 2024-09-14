#include<stdio.h>
int main()
{
    char s='e';
    //char s1="hguy"; this is not allowed
    char s1[5]="hguy";// this is allowed
    printf("%c\n",s);
    //printf("%c\n",s1); this is not allowed
    printf("%s\n",s1);// if you want to use intire string you should use variable name
    printf("%s\n",s1+2);
    printf("%c\n",*(s1+2));// if you want to access particular character you should use pointer
    char *ch=s1;
    printf("%c\n",*(ch+2));
    return 0;
}