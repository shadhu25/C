// Function type:- Takes Something, Return Nothing
#include<stdio.h>
void add(int x, int y){
    int c;
    c=x+y;
    printf("The sum is: %d\n",c);
}
int main(){
    int a,b,c;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
