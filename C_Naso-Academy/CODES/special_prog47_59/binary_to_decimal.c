#include<stdio.h>
int main()
{
    int binary,weight=1,decimal=0,rem;
    printf("enter a binary number: ");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*weight;
        binary=binary/10;
        weight=weight*2;
    }
    printf("decimal = %d\n",decimal);
    return 0;
}