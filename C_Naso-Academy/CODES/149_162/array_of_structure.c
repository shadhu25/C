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
    car c[2]={{"DDis 190 Engine","diesel",37,5,19.74},{"Kappa","petrol",22,8,14.5}};

    for(int i=0;i<2;i++)
    {
        printf("details of car[%d]:\n",i+1);
        printf("%f\n",c[i].city_mileage);
        printf("%s\n",c[i].fuel_type);
        printf("%d\n",c[i].fuel_tank_cap);
        printf("%d\n",c[i].seating_cap);
        printf("%s\n",c[i].engine);
    }
    printf("%s\n",c[0].engine);
    printf("%s\n",c[1].engine);
    return 0;
}