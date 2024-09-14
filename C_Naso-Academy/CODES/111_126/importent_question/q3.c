// how to print the address of a variable?
// solution: use %p as a format specifier in printf function
#include<stdio.h>
int main()
{
    int i=10;
    int *p=&i;
    printf("the address of variable i is %p\n",p);
    return 0;
}