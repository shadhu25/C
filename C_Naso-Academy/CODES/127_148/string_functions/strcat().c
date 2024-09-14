#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    strcpy(str1,"welcome to ");
    strcpy(str2,"our academy");
    strcat(str1,str2);
    printf("%s\n",str1);
    return 0;
}

/*
                        a word of caution
    i)      an undefined behaviour can be observed if size of str1 isn't
            long enough to accomodate the additional characters of str2.
    
    iii)    to avoid this we call strncat() function
*/