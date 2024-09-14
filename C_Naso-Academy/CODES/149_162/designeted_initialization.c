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
    car c1={.city_mileage=14.5,.engine="DDis 190 Engine",.fuel_tank_cap=23};
    car c2={.engine="kappa",.fuel_tank_cap=67,.fuel_type="deasel"};
    printf("%s\n",c1.engine);
    printf("%s\n",c2.engine);
    return 0;
}