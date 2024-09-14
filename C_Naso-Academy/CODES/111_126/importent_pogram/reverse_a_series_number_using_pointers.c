#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,0};
    int *p;
    for(p=x+9;p>=x;p--)
    printf("%d ",*p);
    return 0;
}