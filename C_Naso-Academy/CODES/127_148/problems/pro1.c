#include<stdio.h>
int main()
{
    printf("%c","\n");
    putchar("\n");
    puts('\n');
    printf("%S",'\n');
    return 0;
}


/*
    identify which of the following calls don't work properly and give the
    reason for the same.

    a) printf("c",'\n);
    b)rintf("%c","\n");
    c) putchar('\n);
    d) putchar("\n");
    e) puts('\n');
    f) puts("\n");
    g) printf("%s",'\n);
    h) printf("%S","]\n");

    solution: (b),(d),(e) and (g)
*/