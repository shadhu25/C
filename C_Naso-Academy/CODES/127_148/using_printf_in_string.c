#include<stdio.h>
int main()
{
    char x[50]="hi i am krishn kant";
    char *p=x;
    printf("%s\n",x);
    printf("%s\n",p);
    printf("%.4s\n",x);
    printf("%.7s\n",p);
    printf("%7.4s\n",x);
    printf("%9.7s\n",p);
    printf("%1.7s\n",p);// no effect some as (.7)
    return 0;
}