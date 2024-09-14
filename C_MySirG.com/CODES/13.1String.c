#include<stdio.h>
// #include<conio.h>
int main(){
    // Different ways of initializing
    char C[20]={'N','A','R','A','Y','A','N','\0'}; // initializing while declaration and rest element will filled with '\0'
    char R[20]="HARI NARAYAN";
    char P[20];
    scanf("%s",P); // it will not accept space
    // gets(R); not working
    // Different ways of printing
    for(int i=0;C[i]!='\0';i++) // printing character by caharacter with help of loop 
        printf("%c",C[i]);
    
    printf("\n%s\n",P); // printing but it will accept space
    puts(R); // it will add '\n' after printing and this will accept 
    return 0;
}