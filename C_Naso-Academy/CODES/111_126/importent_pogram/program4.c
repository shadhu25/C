// GATE 2015 set-1
// what is the output of the following C code? assume that the address of
// x is 2000 (in decimal) and an integer requires four bytes of memory.
#include<stdio.h>
int main()
{
    unsigned int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%p %p %p %p \n",x+3,*(x+3),*(x+2)+3);
    return 0;
}


/*
    OPTIONS:
        
        a) 2036,2036,2036
        b) 2012,4,2204
        c) 2036,10,10
        d) 2012,4,6

        answer: (a)
*/