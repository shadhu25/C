#include<stdio.h>
int var=5;
int main()
{
    int var=var;
    //this will print a garbage value
    printf("%d\n",var);
    return 0;
}