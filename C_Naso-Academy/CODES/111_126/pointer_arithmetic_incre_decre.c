#include<stdio.h>
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,90};
    int *p=&x[2];
    printf("%d\n",*(++p));
    printf("%d\n",*(p++));
    printf("%d\n",*(--p));
    printf("%d\n",*(p--));
    return 0;
}
