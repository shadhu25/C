#include<stdio.h>
int main(){
    { // case 1
        const int x=44; // constant variable
        int *p1=&x;
        printf("x = %d\n",x);
        // x=77; give error
        *p1=77;
        printf("x = %d\n",x);
    }

    { // case 2
        int y=7;
        const int *p2=&y;
        // *p2=77; give error
        int temp=8;
        p2=&temp;
    }

    { // case 3
        int y=7;
        int * const p2=&y;
        *p2=77;
        int temp=8;
        // p2=&temp; give error
    }

    { // case 4
        int y=7;
        const int * const p2=&y;
        // *p2=77; give error
        int temp=8;
        // p2=&temp; give error
    }
    return 0;
}