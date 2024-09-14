#include<stdio.h>
int main()
{
    enum point1{x=34,y,z=0,n=0,r=2};
    enum point2{x=4,q=25,p=1,d='e'};
    printf("%d %d\n",z,n);// fact 1
    printf("%d\n",y);// fact 2
    printf("%d\n",d);// fact 3
    printf("%d\n",x);// fact 4

}

/*
                            FACTS
    1) two or more names can have same value.
    2) we can assign value in any order. all unassigned names will get
    value as vvalue of previous name+1.
    3) only integral values are allowed
    4) all enum constant must be unique in their scope.
*/  