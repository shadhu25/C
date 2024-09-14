// my solution
#include<stdio.h>
int main()
{
    int x[]={65,87,987,9,76,9,8,5,65,65,5};
    int *ptr1,*ptr2,min=0,max=0,len,i;
    ptr1=&min;
    ptr2=&max;
    len=sizeof(x)/sizeof(x[0]);
    for(i=0;i<len;i++)
    {
        if(*ptr2<x[i])
        *ptr2=x[i];
    }
    *ptr1=*ptr2;
    for(i=0;i<len;i++)
    {
        if(*ptr1>x[i])
        *ptr1=x[i];
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}