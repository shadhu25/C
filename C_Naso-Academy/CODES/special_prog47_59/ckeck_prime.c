#include<stdio.h>
int main()
{
    int num,x,count;
    printf("enter the number\n");
    scanf("%d",&num);
    x=num/2;
    while(x>2)
    {
        if(num%x==0)
        {
            count=1;
        }
        x--;
    }
    if(count==1||num==1)
    printf("it is not a prime number\n");
    else
    printf("it is a prime number\n");
    return 0;
}

/*   
#include<math.h>
 int x;
int i,val1,val2,count=0;
printf("please enter anumber (only positive integers)");
scanf("%d",&x);
val1=ceil(sqrt(x));
val2=x;
for(i=2;i<=val1;i++)
{
    if(val2%i==0)
    count=1;
}
if((count==0&&val2!=1)||val2==2||val==3)
    printf("%d is not a prime number",val2);
else
    printf("%d is a prime number",val2);
return 0;
*/