#include<stdio.h>
int main()
{
    int x[]={34,56,54,32,67,89,90,32,21};
     for(int i=0;i<9;i++)// for original order
    {
        printf("%d ",x[i]);
    }
    printf("\n");
     for(int i=8;i>=0;i--)// for reverse order
    {
        printf("%d ",x[i]);
    }
    return 0;
}