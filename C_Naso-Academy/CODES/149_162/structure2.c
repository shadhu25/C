#include<stdio.h>
struct{ // this is globle structure
    char *name;
    int age;
    int salary;
}emp1,emp2;

int manager()
{   // this structure is local for the function 
    struct{
        char *name;
    int age;
    int salary;
    }manager;
    manager.age=27;
    if(manager.age>30)
        manager.salary=65000;
    else
        manager.salary=55000;
    return manager.salary;
}

int main()
{
    printf("enter the salary of employee1: ");
    scanf("%d",&emp1.salary);
    printf("enter the salary of employee2: ");
    scanf("%d",&emp2.salary);
    printf("%d\n",emp1.salary);
    printf("%d\n",emp2.salary);
    printf("manager's salary is %d\n",manager());
    return 0;
}