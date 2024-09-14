#include<stdio.h>
int main()
{
    int x[]={0,1,2,3,4,5,6,7,8,9};
    int i,*p;
    p=&x;
    /*for(i=0;i<10;i++)
    {
        printf("x[%d]: ",i);
        scanf("%d",&*(p+i));
    }*/
    printf("\n");
     for(i=9;i>=0;i--)
    {
        printf("x[%d]: %d\n",i,*(p+i));
        
    }
     for(i=9;i>=0;i--)
    {
        printf("x[%d]: %d\n",i,*(x+i));
        
    }
    return 0;
}