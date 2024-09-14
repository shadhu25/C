#include<stdio.h>
#include<string.h>
int main()
{
    char str1[6]="hello";
    printf("%d\n",strlen(str1));// it doesn't count NULL charecter.
    return 0;
}