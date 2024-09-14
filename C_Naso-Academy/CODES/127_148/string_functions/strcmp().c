#include<stdio.h>
#include<string.h>
int main()
{
    {
        printf("str1=abcd str2=abce\n");
    char *str1="abcd";// incase of variable use only str1[5] not usr str1 because it is pointer
    char *str2="abce";
    if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else
    printf("str1 is greater than or equal to str2\n");
    }

    {
        printf("str1=abce str2=bbce\n");
    char *str1="abce";
    char *str2="bbce";
    if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else
    printf("str1 is greater than or equal to str2\n");
    }

    {
        printf("str1=bace str2=abce\n");
    char *str1="bace";
    char *str2="abce";
    if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else
    printf("str1 is greater than or equal to str2\n");
    }

    {
        printf("str1=abcd str2=abcd\n");
    char *str1="abcd";
    char *str2="abcd";
    if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else
    printf("str1 is greater than or equal to str2\n");
    }

    {
        printf("str1=abcd str2=abc\n");
    char *str1="abcd";
    char *str2="abc";
    if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else
    printf("str1 is greater than or equal to str2\n");
    }
    return 0;
}