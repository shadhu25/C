// else if
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>90)
        printf("Grade- A\n");
    else if(marks>80)
        printf("Grade- B\n");
    else if(marks>70)
        printf("Grade- C\n");
    else
        printf("Grade- D\n");  

    return 0;
}



/*
    you can right the whole if program like this also
    if(marks>90)
        printf("Grade- A\n");
    else{
        if(marks>80)
            printf("Grade- B\n");
        else{
            if(marks>70)
                printf("Grade- C\n");
            else
                printf("Grade- D\n");
        }   

    }
*/