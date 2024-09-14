#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5];
    char str2[100];
    strcpy(str1,"he");
    strcpy(str2,"llo!");
    strncpy(str1,str2,sizeof(str1)-strlen(str1)-1);// it atomatically add NULL character.
    printf("%s\n",str1);
    return 0;
}