#include<stdio.h>
int main()
{
    int number,i,sum=0;
    printf("enter an enteger: ");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {
        if(number%i==0)
            sum=sum+i;
    }
    
    if(sum==number)
    printf("%d is strong number\n",number);
    else
    printf("%d is not strong number\n",number);
}