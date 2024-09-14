#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[]={"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
    printf("%s\n",fruits[0]);// we can't use fruits - use fruits[0]
    printf("%s\n",*(fruits+1));
    printf("%s\n",*(fruits+2));
    printf("%s\n",*(fruits+3));
    printf("%s\n",fruits[2]);
    if(strcmp(fruits[1],fruits[2])<0)
    printf("%s are lesser than %s\n",fruits[1],fruits[2]);
    else
    printf("%s are greater than %s\n",fruits[1],fruits[2]);
    return 0;
}