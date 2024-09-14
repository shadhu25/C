#include<stdio.h>
int main(){
    int x,b=4,a=5;
    x=5>4?1,2,3,4:5,6,7;
    printf("%d\n",x);
    x=5<4?1,2,3,4:5,6,7;
    printf("%d\n",x);
    a>b?x=a:(x=b);
    printf("%d\n",x);
    return 0;
}