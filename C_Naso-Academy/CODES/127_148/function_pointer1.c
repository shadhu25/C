#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a=3,b=9,result;
    int (*ptr)(int,int)=add;
    result=ptr(a,b);
    printf("%d\n",result);
    {
        int a=3,b=9,result;
        int (*ptr)(int,int)=&add;
        result=(*ptr)(a,b);
        printf("%d\n",result);
    }
    return 0;
}