// preprocessor: #if #elif #else #endif
#include<stdio.h>
#define MARKS 29


int main(){
    #if MARKS>=80
        printf("GRADE: A\n");
    #elif (MARKS<80 && MARKS>=60)
        printf("GRADE: B\n");
    #elif (MARKS<60 && MARKS>=40)
        printf("GRADE: C\n");
    #elif (MARKS<40 && MARKS>=30)
        printf("GRADE: C\n");
    #else
        printf("You are fail\n");
    #endif
}
