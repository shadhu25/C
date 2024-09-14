// union
#include<stdio.h>
union krishn{
    int integer;
    float Float;
    int Radha;
};

int main(){
    union krishn k1;
    k1.integer=55;
    printf("%d\n",k1.integer);
    k1.Float=89.88;
    printf("%d\n",k1.integer); // it will print garbage value because of union
    return 0;
}
