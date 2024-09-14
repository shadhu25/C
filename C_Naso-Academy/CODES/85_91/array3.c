// check whether any of the digits in a number appear more than once.
#include<stdio.h>
int main()
{
    int seen[10]={0};
    int N;
    printf("enter the number: ");
    scanf("%d",&N);
    int rem;
    while(N>0)
    {
        rem=N%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
        N=N/10;
    }
    if(N>0)
    printf("YES ");
    else
    printf("NO ");
    return 0;
}


/*
    MY SOLUTION without using array

    #include<stdio.h>
    int main()
    {
        int n,m=0,o=0,count=0,m1=0,rem=0,m2=0,com=0;
        printf("enter the number: ");
        scanf("%d",&n);
        m1=n;
        while(m1!=0)
        {
            count++;
            m1=m1/10;
        }
        m=n/10;
        o=n%10;
        while(count!=1)
        {
            m2=m;
            while(m!=0)
            {
                rem=m%10;
                if(rem==o)
                {
                    com++;
                    break;
                }
            }
            m=m2/10;
            o=m2%10;
            count--;
        }
        if(com==1)
        printf("YES");
        else
        printf("NO");
        return 0;
    }
*/