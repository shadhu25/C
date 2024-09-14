#include<stdio.h>
typedef union 
{
    int a;
    char b;
    double c;
}data;

int main()
{
    data arr[0];
    arr[0].a=10;
    arr[1].b='a';
    arr[2].c=10.178;
    printf("%c\n",arr[1].b);
    return 0;
}