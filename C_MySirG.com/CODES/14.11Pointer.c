// Application of function pointer
#include<stdio.h>
int Sum(int, int);
int Mul(int, int);
int Div(int, int);
int Sub(int, int);
int main(){
    int (*funP[5])(int, int)={Sum, Mul, Div, Sub};
    int choice,a,b;
    printf("Enter 0 for Sum, 1 for Multiply, 2 for Division, and 3 for subtraction: ");
    scanf("%d",&choice);
    printf("Enter any two integer: ");
    scanf("%d %d",&a,&b);
    printf("%d\n",funP[choice](a,b));
    return 0;
}

int Sum(int a, int b){
    printf("Sum = ");
    return a+b;
}

int Sub(int a, int b){
    printf("Subtraction = ");
    return a-b;
}

int Mul(int a, int b){
    printf("Mutiply = ");
    return a*b;
}

int Div(int a, int b){
    printf("Division = ");
    return a/b;
}