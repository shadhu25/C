// preprocessor: #ifdef #ifudef ##(concatenation)
#include<stdio.h>
#define MARKS 44
#define SUMCONT(a,b,c) a+b##c
int main(){
    #ifdef MARKS
        printf("The macro is defined\n");
    #endif

    #ifndef MARKS
        printf("The macro is not defined\n");
    #endif
// a=2 b=3 c=4  a+b##c -> 2+3##4 -> 2+34 -> 36 
    printf("%d\n",SUMCONT(2,3,4));
}