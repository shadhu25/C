// Function type:- Takes Something, Return Something
#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int main(){
    int a,b,c;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("The sum is: %d\n",c);
    return 0;
}
