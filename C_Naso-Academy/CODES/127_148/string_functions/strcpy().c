#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="hello";
    char str2[10];
    char str3[10];
    printf("%s\n",strcpy(str2,str1));
    printf("%s\n",str2);
    printf("%s\n",strcpy(str3,strcpy(str2,str1)));
    printf("%s\n",str3);
    return 0;
}

/*
                        a word of caution
    i)      in the call to strcpy(str2,str1), there is no way the strcpy
            will check string pointed by str1 will fit in str2.

    ii)     if the lenth of the string pointed by str1 is greater than the
            lenth of the array str2 then it will be an undefiend behaviour.

    iii)    to avoid this we call strncpy() function
*/
