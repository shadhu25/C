#include<stdio.h>
int main()
{
    int x[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    int *p=x;
    printf("%d\n",*p+6);
    printf("%d\n",*(**(x+1)+2));
    printf("%d\n",**((*x)+2)+2);
    printf("%d\n",*((**x)+6));
    return 0;
}