#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,0};
    int sum=0,*p=&x[0],i;
    /*for(p=&x[0];p<=x[9];p++) NACO
    {
        sum+=*p;
    }*/
    for(i=0;i<10;i++)
    sum+= *(p++);
    printf("%d\n",sum);
    return 0;
}