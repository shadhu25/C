#include<stdio.h>
int main(){
    int a,*p;
    p=&a;
    float b,*q;
    q=&b;
    // Pointer Arithmetic
    &a/&b; // not possible
    p/q; // not possibe
    &a*&b; // not possible
    p*p; // not possibe
    p*5; // not possible
    p+ q; // not possibe
    // p=1000  p+1=1000+1*4(type)
    p+1; // possible
    q+3; // possible
    int x,*m;
    // p=1000  q=1020  m-p=1000-1020/4(type)
    m-p; // possible
    return 0;
}