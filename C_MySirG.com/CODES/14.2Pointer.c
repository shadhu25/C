#include<stdio.h>
void swap(int *m, int *n){
    int v;
    v=*m;
    *m=*n;
    *n=v;
}
int main(){
    int a=7,b=6;
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("after swaping\n");
    printf("a = %d b = %d\n",a,b);
    return 0;
}