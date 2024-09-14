#include<stdio.h>
int main()
{
    int number,count=0,x,crt,rem,mul=1,result=0;
    printf("enter the number\n");
    scanf("%d",&number);
    x=number;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
        x=number;
        crt=count;
        while(x!=0)
        {
            rem=x%10;
            while(crt!=0)
            {
                mul=mul*rem;
                crt--;
            }
            result=result+mul;
            crt=count;
            x=x/10;
            mul=1;
        }
        if(result==number)
        printf("%d is an armstrong number\n",number);
        else
        printf("%d is not an armstrong number\n",number);
    return 0;
}