#include<stdio.h>
union abc 
{
    int a;// 4bytes
    char b;// 1byte
}var;// 4bytes
int main()
{
    var.a=65;
    union abc *p=&var;    
    printf("%d\n",p->a);
    printf("%c\n",p->b);
    printf("%d\n",sizeof(var));
    return 0;
}