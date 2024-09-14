#include<stdio.h>
int main()
{
    long int x[]={45,65,87,675.765,876,8654,76,86,644,876,87,8,66,98,977,987,98,45};
    printf("the total no. of element is : %ld\n",sizeof(x)/sizeof(x[0]));
    return 0;
}