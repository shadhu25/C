// check there is a dublicate element 
#include<stdio.h>
int main()
{
    int x[]={5,6,8,3,2,3};
    int count=0;

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(x[i]==x[j])
            {
                count++;
                break;
            }
        }
    }

    if(count==1)
    printf("YES ");
    else
    printf("NO ");
    return 0;
}