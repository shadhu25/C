#include<stdio.h>
struct date{
    int d,m,y;
};
int main(){
    struct date today={6,6,1015};
    struct date d1;
    d1.d=23;
    d1.m=3;
    d1.y=2000;
    struct date d2;
    d2=today;
    printf("%d %d %d\n",d2.d,d2.m,d2.y);
    printf("%d %d %d\n",d1.d,d1.m,d1.y);
}