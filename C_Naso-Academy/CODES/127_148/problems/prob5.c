#include<stdio.h>
void fun1(char *s1, char *s2)
{
    char *tmp;
    tmp=s1;
    s1=s2;
    s2=tmp;
}
void fun2(char **s1,char **s2)
{
    char *tmp;
    tmp=*s1;
    *s1=*s2;
    *s2=tmp;
}
int main()
{
    char x[3]="hi";
    char y[4]="bye";
    char *str1=x;
    char *str2=y;
    fun1(str1,str2);
    printf("%s %s",str1,str2);
    fun2(&str1,&str2);
    printf("%s %s\n",str1,str2);
    return 0;
}