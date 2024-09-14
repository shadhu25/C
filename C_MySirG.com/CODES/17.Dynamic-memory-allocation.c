// Dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=44;
    printf("%d\n",*p);
    float *q=(float*)calloc(5,sizeof(float));
    int i;
    for(i=0;i<5;i++)
        *(q+i)=i;
    for(i=0;i<5;i++)
        printf("%f ",*(q+i));
    printf("\n");
    int *z=(int*)realloc(p,2*sizeof(int));
    printf("%d\n",*z);
    return 0;
}