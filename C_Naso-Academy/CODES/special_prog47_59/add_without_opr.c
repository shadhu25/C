#include<stdio.h>
int main()
{
   int x,y,i;
    printf("enter the both numbers with space\n");
    scanf("%d %d",&x,&y);
    if(y>0)
    {
        while(y!=0)
        {
        x++;
        y--;
        }
    }
    else if(y<0)
    {
        while(y!=0)
        {
        x--;
        y++;
        }
    }
    printf("x+y = %d\n",x);
    return 0;
}
//another solution using bitwise operator

/*
    int x,y,sum,carry;
    printf("enter the both numbers with space\n");
    scanf("%d %d",&x,&y);
    while(b!=0)
    {
        sum=x^y;
        carry=(x&y)<<1;
        x=sum;
        y=carry;
    }
    printf("x+y = %d\n",x);
    */

// my solutions1

/*
int x,y,i;
    printf("enter the both numbers with space\n");
    scanf("%d %d",&x,&y);
    for(i=0;i<y||i>y;i++)
    {
        x++;
    }
    printf("x+y = %d\n",x);
    */
   // my solution2
   /*
   int x,y,i;
    printf("enter the both numbers with space\n");
    scanf("%d %d",&x,&y);
    if(y>0)
    {
        for(i=0;i<y;i++)
        {
        x++;
        }
    }
    else
    {
        for(i=0;i>y;i--)
        {
        x--;
        }
    }
    printf("x+y = %d\n",x);
    */