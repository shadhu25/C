#include<stdio.h>
int *find_mid(int a,int b[])
{
    return &b[a/2];
}
int main()
{
    int x[]={234,7263,828,7266,8765};
    int len =sizeof(x)/sizeof(x[0]);
    int *ptr=find_mid(len,x);
    printf("%d\n",*ptr);
}