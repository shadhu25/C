// types of pointers: Void pointer
#include<stdio.h>
int main(){
    int c=4;
    void *p=&c; // Void pointer
    *(int*)p=7;
    printf("%d\n",*(int*)p);
    float m=77;
    *(float*)p=8;
    printf("%f\n",*(float*)p);
    double n=77.6;
    *(double*)p=99.77;
    printf("%f\n",*(double*)p);
    return 0;
}