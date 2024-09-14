#include<stdio.h>
#define MAX 50
int main()
{
    int x[MAX][MAX];
    int y[MAX][MAX];
    int xy[MAX][MAX];
    int xr,xc,yr,yc;
    int mul=0;
    int j,i,k;
    printf("enter the rows and colums of the matrix X: ");
    scanf("%d %d",&xr,&xc);
    printf("enter the elements of matrix X\n");
    for(i=0;i<xr;i++)
    {
        for(j=0;j<xc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("enter the rows and colums of the matrix Y: ");
    scanf("%d %d",&yr,&yc);
    if(xc!=yr)
    printf("Sorry! we cannot multiply the matrices X and Y");
    else
    {
        printf("enter the elements of matrix Y\n");
        for(i=0;i<yr;i++)
        {
            for(j=0;j<yc;j++)
            {
                scanf("%d",&y[i][j]);
            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                mul+=x[i][k]*y[k][j];
            }
            xy[i][j]=mul;
            mul=0;
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",xy[i][j]);
        }
        printf("\n");
    }
    return 0;
}
