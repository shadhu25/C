#include<stdio.h>
#pragma pack(1)
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
    printf("%d\n",sizeof(x));// this happening due to packing give 10bytes
    printf("%d\n",sizeof(o));
}