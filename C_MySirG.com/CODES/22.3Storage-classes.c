// Storage classes: static
#include<stdio.h>
void f1(){
    static int a;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);
}
int main(){
    f1();
    f1();
    return 0;
}