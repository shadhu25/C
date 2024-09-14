#include<stdio.h>
#include<string.h>
int main()
{
    char fruits[][12]={"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};

    printf("%s\n",fruits[1]);// will print 2 apples
    printf("%s\n",fruits[3]);// will print 1 pine apple
    //printf("%s\n",fruits[1][2]);
    printf("%s\n",*fruits);// will print 2 oranges
    printf("%s\n",fruits);// will print 2 oranges
    printf("%.1s\n",*(fruits+2));// will print bananas
    printf("%s\n",*fruits+3);
    return 0;
}