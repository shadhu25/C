#include<stdio.h>
int main(){
    int x=44,*p;
    float y,*k;
    p=&x;
    // p=&y; will give error
    k=&y;
    printf("%d %p\n",x,p);
    printf("%d %p\n",*p,&x);
    printf("%p\n",*&k);

}