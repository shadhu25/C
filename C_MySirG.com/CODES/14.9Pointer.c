// types of pointers: Dangling pointer
#include<stdio.h>
int main(){
    int *p=NULL;
    {
        int x=66;
        p=&x;
    } // after execution of this peace of code pointer p will be a dangling pointer because variable x will destroyed by complition
    return 0;
}