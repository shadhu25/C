#include<stdio.h>
enum bool{false,true};
int main()
{
    enum bool var;
    var=true;
    printf("%d\n",var);// enum names are automatically initialized by the compiler
    return 0;
}