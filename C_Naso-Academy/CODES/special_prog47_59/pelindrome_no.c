#include<stdio.h>
int main()
{
    int num,n,rem,result=0;
    printf("enter the number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        rem=n%10;
        result=result*10+rem;
        n/=10;
    }

    if(result==num)
    printf("yes the number is pelindrome\n");
    else
    printf("no! the number is not a pelindrome %d\n",result);
    return 0;
}