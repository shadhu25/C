// Bit fields
#include<stdio.h>
struct date{
    unsigned int d:5; // take 5 bits
    unsigned int m:4; // take 4 bits
    unsigned int y;
};
int main(){
    struct date d1={2,4,2003};
    printf("size of d1 is %d\n",sizeof(d1)); // otherwise it will take 12 bytes
}