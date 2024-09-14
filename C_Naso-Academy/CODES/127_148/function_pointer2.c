#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int divi(int x, int y)
{
    return x/y;
}

int mul(int x, int y)
{
    return x*y;
}
int main()
{
    int a,b,choice;
    printf("enter your choice 0 for add 1 for sub 2 for mul 3 for divi: ");
    scanf("%d",&choice);
    printf("enter the operands wit apace: ");
    scanf("%d %d",&a,&b);
    // using switch
    {
            switch (choice)
        {
            case 0: printf("%d\n",add(a,b)); break;
            case 1: printf("%d\n",sub(a,b)); break;
            case 2: printf("%d\n",mul(a,b)); break;
            case 3: printf("%d\n",divi(a,b)); break;
            default: printf("data not found\n");
        }

    }
    // using function pointer
    {
        int (*ptr[4])(int,int)={add,sub,mul,divi};
        printf("%d\n",ptr[choice](a,b));

    }


    return 0;

}