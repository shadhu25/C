// Unary operator
#include<stdio.h>
int main(){
    int X,Y,Z;
    X=Y=Z=10;
    ++X; // pre increment
    printf("%d\n",X);
    X++; // post increment
    printf("%d\n",X);
    --Y; // pre decrement
    printf("%d\n",Y);
    Y--; // post decrement
    printf("%d\n",Y);
    Z=Y++;
    printf("%d\n",Z);
    Z=X--;
    printf("%d\n",Z);
    printf("%ld\n",sizeof(double));
    printf("%ld\n",sizeof(Y));
    printf("%ld\n",sizeof('A'));
    printf("%ld\n",sizeof(55));
    printf("%ld\n",sizeof(55.55));
    return 0;
}