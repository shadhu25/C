// Storage classes: extern
#include<stdio.h>
void f1(){
    extern int a;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
}
int a;
int main(){
    f1();
    f1();
    return 0;
}