// naco solution
#include<stdio.h>
void minmax(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
        *max=arr[i];
        if(arr[i]<*min)
        *min=arr[i];
    }
}
int main()
{
    int a[]={23,73,746,37,8,5,339,846,226,5,3,828,29,7382};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("minimum value in te array is: %d and maximaum value is: %d\n",min,max);
    return 0;
}