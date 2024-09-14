// finding the greatest number among the all given numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    // if you can't understand it go below of the file
    printf("%d\n",a>b?a>c?a:c:b>c?b:c);
    return 0;
}



/*
    if(a>b){
        if(a>c)
            printf("%d\n",a);
        else
            printf("%d\n",c);
    }
    else{
        if(b>c)
            printf("%d\n",b);
        else
            printf("%d\n",c);
    }
*/