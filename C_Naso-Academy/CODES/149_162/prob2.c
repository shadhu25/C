#include<stdio.h>
#pragma pack(1)
struct 
{
    double a;// 8b
    union 
    {
        char b[4];// 4b
        double c;// 8b
        int d;// 4b
    }e;//8b
    char f[4];// 4b
}s;// 20b

union
{
    double a;// 8b
    struct 
    {
        char b[4];// 4bb
        double c;// 8b
        int d;// 4b
    }e;// 16b
    char f[4];// 4b
}u;// 16b

int main()
{
    printf("%d %d\n",sizeof(s),sizeof(u));
    return 0;
}