// Storage classes: register
#include<stdio.h>
int main(){
    register int x=5;
    int y=x;
    x--;
    x++;
    x=56+56;
    return 0;
}