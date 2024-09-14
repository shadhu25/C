#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,0};
    int sum=0,*p=&x[0],i;
    for(p=x;p<=x+9;p++) //NACO
        sum+=*p;
    sum=0;
    for(i=0;i<10;i++) //MY
    sum+= *(x+i);// we can't use (x++) because it is true that we can use 
    //array name as pointers, but assigning a new address to them is not possible
    printf("%d\n",sum);
    return 0;
}