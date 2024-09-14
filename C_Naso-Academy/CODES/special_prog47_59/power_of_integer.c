#include<stdio.h>
int main()
{
    int expo,base,power=1;
    double power1=1.0;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the exponent: ");
    scanf("%d",&expo);
    if(expo>0)
    {
        while(expo!=0)
        {
        power=power*base;
        expo--;
        }
        printf("power = %d\n",power);
    }
    else
    {
        while(expo!=0)
        {
        power1=power1*1/base;
        expo++;
        }
        printf("power = %.10lf\n",power1);
    }
    
    return 0;
}