#include<stdio.h>
int add(int, int); // function declaration
int main(){
    int a, b;
    printf("Enter any two integer: ");
    scanf("%d %d",&a,&b);
    printf("the sum: %d\n",add(a,b)); // function call
    return 0;
}

int add(int x, int y){ // function defintion
    return x+y;
}