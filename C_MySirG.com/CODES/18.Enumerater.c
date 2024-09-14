// Enumetrator
#include<stdio.h>
enum boolean{
    false, true
};
enum boolean isEven(){
    int n;
    printf("Enter any interger: ");
    scanf("%d",&n);
    if(n%2==0)
        return true;
    else
        return false;
}
int main(){
    if(isEven()==true)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");
    return 0;
}