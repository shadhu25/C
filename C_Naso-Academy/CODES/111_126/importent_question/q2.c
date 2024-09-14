// what is the output of the following program
#include<stdio.h>
void fun(const int *p)
{
    *p=0;
}
int main()
{
    const int i=0;
    fun(&i);
    return 0;
}

// answer: error: assignment of read-only location *p