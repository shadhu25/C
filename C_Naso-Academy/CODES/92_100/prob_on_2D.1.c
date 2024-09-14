// WAP that reads a 5x5 array of integers and then prints the row
// sum and the column sum
#include<stdio.h>
int main()
{
    int x[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int sum=0;
    //printing ROW SUM
    printf("ROW SUM    : ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum=sum+x[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
    //printing COLUMN SUM
    printf("COLUMN SUM : ");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum=sum+x[j][i];
        }
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}