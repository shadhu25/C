// Array
#include<stdio.h>
int main(){
    int a[10]={33,43,56,83,78,4,76,12,34,65};
    float avg;
    int sum=0;
    for(int i=0;i<10;i++)
        sum=sum+a[1];
    avg=sum/10.0;
    printf("The average: %f\n",avg);
    return 0;
}