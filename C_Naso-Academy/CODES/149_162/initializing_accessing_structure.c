#include<stdio.h>
typedef struct car{
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
}car;
int main()
{
    car c1={"DDis 190 Engine","diesel",37,5,19.74};
    car c2={"Kappa","petrol",22,8,14.5};
    printf("%s\n",c1.engine);
    printf("%s\n",c2.engine);
    return 0;
}