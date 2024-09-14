#include<stdio.h>
struct{
    char *name;
    int age;
    int rolno;
    int mark;
} stu1,stu2;
int main()
{
    printf("enter the student details\n");
    printf("enter the details of student1\n");
    printf("name: ");
    scanf("%s",&stu1.name);
    printf("%s",stu1.name);
    
    return 0;
}