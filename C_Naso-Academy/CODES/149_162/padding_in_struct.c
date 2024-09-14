#include<stdio.h>
struct abc
{
    char x;
    int y;
    char z;
    int a;
};

int main()
{
    struct abc x;
    int o;
    printf("%d\n",sizeof(x));// this happening due to padding
    printf("%d\n",sizeof(o));
}