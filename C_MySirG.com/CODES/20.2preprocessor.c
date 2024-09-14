// preprocessor: macro(#define)
#include<stdio.h>
#define PI 3.14
#define PRODUCT(a,b) a*b

int main(){
    int r;
    float a;
    printf("Enter the radius: ");
    scanf("%f",&a);
    a=PI*a*a;
    printf("The area of the circle is %f\n",a);
    // a=3 b=4 a+b = 3*4 = 12
    printf("product of 3 and 4 is %d\n",PRODUCT(3,4));
    // a=3+2 b=4-6 a+b = 3+2*4-6 = 5
    printf("product of 3+2 and 4-6 is %d\n",PRODUCT(3+2,4-6));
    // a=5 b=-2 a+b = 5*-2 = -10
    printf("product of (3+2) and (4-6) is %d\n",PRODUCT((3+2),(4-6)));
    #undef PRODUCT
    printf("product of 3 and 4 is %d\n",PRODUCT(3,4));
    return 0;
} 