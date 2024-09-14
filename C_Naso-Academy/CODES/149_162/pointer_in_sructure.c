#include<stdio.h>
struct abc
{
    int x,y;
};
int main()
{
    struct abc c={0,1};
    struct abc *ptr=&c;
    printf("%d %d\n",ptr->x,ptr->y);
    return 0;
}