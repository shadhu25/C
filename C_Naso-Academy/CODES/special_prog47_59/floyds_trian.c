#include<stdio.h>
int main()
{
    int row,j,i,x;
    printf("how many number you want: ");
    scanf("%d",&row);
    x=1;
    for(i=1;i<=row;i++)
    {
           for(j=1;j<=i;j++)
        {

            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
