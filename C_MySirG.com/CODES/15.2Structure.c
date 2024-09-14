#include<stdio.h>
#include<string.h>
struct book{
    int bookid;
    char name[20];
    float price;
};
struct book input(){
    struct book b;
    printf("Enter book details: ");
    scanf("%d",&b.bookid);
    scanf("%s",b.name);
    scanf("%f",&b.price);
    printf("%d\n",b.bookid);
    printf("%s\n",b.name);
    printf("%f\n",b.price);
    return b;
}
int main(){
    struct book b1;
    b1=input();
}