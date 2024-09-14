#include<stdio.h>
int main()
{
    {   // in 1D array
        int a[6]={1,2,3,4,5,6};
        int (*p)[6]=&a;
        printf("%d %d\n",(*p)[1],(*p)[2]); 
    }

    {   //  in 2D array
        int a[][3]={1,2,3,4,5,6};
        int (*p)[3]=&a;
        printf("%d %d\n",(*p)[1],(*p)[2]); 
        ++p;
        printf("%d %d",(*p)[1],(*p)[2]);

    }
    
    return 0;
}