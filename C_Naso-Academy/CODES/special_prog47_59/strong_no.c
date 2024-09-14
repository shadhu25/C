#include<stdio.h>
int main()
{
    int number,num,fac=1,snum=0,x;
    printf("enter the number\n");
    scanf("%d",&number);
    num=number;
    while(num!=0)
    {
        x=num%10;
        while(x!=0)
        {
            fac=fac*x;
            x--;
        }
        snum=snum+fac;
        fac=1;
        num=num/10;
    }
    if(snum==number)
        printf("%d is an strong number\n",number);
        else
        printf("%d is not an strong number\n",number);
    
    return 0;
}