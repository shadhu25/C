#include<stdio.h>
void input(int*);
void display(int*);
void sort(int*);
int main(){
    int a[5];
    input(a);
    printf("\n");
    display(a);
    printf("\n");
    sort(a);
    printf("\n");
    display(a);
    printf("\n");
    return 0;
}

void input(int *k){
    for(int i=0;i<5;i++)
        scanf("%d",k+i);
}

void display(int *k){
    for(int i=0;i<5;i++)
        printf("%d ",*(k+i));
}

void sort(int *k){
    int round,i;
    for(round=1;round<5;round++){
        for(i=0;i<4;i++){
            if(*(k+i)>*(k+i+1)){
                int j;
                j=*(k+i);
                *(k+i)=*(k+i+1);
                *(k+i+1)=j;
            }
        }
    }
}