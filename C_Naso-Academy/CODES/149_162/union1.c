#include<stdio.h>
union abc 
{
    int a;// 4bytes
    char b;// 1byte
}var;// 4bytes
int main()
{
    var.a=65;
    printf("%d\n",var.a);
    printf("%c\n",var.b);
    printf("%d\n",sizeof(var));
    return 0;
}