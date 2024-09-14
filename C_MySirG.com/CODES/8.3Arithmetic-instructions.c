// modulus(%)
#include<stdio.h>
int main(){
    int a=30,b=4;
    printf("%d\n",a%b);
    a=4,b=30;
    printf("%d\n",a%b);
    a=-30,b=4;
    printf("%d\n",a%b);
    a=30,b=-4;
    printf("%d\n",a%b);
    a=30,b=5;
    printf("%d\n",a%b);
    // a=30.4,b=4; give error
    printf("%d\n",a%b);
    return 0;
}