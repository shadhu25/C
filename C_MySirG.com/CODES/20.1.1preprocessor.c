// preprocesor: #include
#include<stdio.h>
#include"/media/shadhu/94986C41986C2448/studyMetarials/languageCode/C/c(saurabhshukla)/20.2preprocessor.c"
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
    printf("%d\n",sum(5,5));
    return 0;
}