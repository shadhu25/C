#include<stdio.h>
struct point
{
    int x,y,z;
};

int main()
{
    struct point p1={.y=0,.z=1,.x=2};
    printf("%d %d %d\n",p1.x,p1.y,p1.z);
    return 0;
}