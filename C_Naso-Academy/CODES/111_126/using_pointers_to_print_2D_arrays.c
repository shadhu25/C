#include<stdio.h>
int main()
{
    int x[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int *p=x;
    printf("%d\n",*p);
    for(int i=0;i<9;i++)
    {
        printf("%d \n",*(p++));
        
    }
    
return 0;
}