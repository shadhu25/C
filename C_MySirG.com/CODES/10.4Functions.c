// Function type:- Takes Nothing, Return Something
#include<stdio.h>
int add(){
    int a,b;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main(){
    int c;
    c=add();
    printf("The sum is: %d\n",c);
    return 0;
}
