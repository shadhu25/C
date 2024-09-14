#include<stdio.h>
int main()
{
    int x[2][2]={{1,2},{3,4}};
    int *p=x;
    printf("%d\n",*p+3);
    printf("%d \n",*(*(x+1))+1);
    return 0;
}
   