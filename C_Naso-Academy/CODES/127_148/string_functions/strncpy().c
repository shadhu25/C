#include<stdio.h>
#include<string.h>
int main()
{
    char str1[6]="hello";
    char str2[4];
    strncpy(str2,str1,sizeof(str2));// it doesn't add NULL character.
    str2[(sizeof(str2)-1)]='\0';
    printf("%s\n",str2);
    return 0;
}

/*
                    a word of caution
        strncpy() will leave the string in str2(destination) without a
        a terminating NULL charector, if the size of str1(source) is equal
        to or greater than the size of str2(destination) it cause of
        undefined behaviour.

        to avoide this we have to put the extra line after the function complition
                        str2[(sizeof(str2)-1)]='\0';
*/