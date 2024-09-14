#include<stdio.h>
int length(char*);
void reverse(char*);
int main(){
    printf("Length: %d\n",length("COMPUTER"));
    // printf("%s",reverse("COMPUTER")); give Segmentation fault (core dumped)
    char m[10]="COMPUTER";
    reverse(m);
    printf("%s",m);
    return 0;
}

int length(char *c){
    int i;
    for(i=0;*(c+i)!='\0';i++);
    return i;
}

void reverse(char *d){
    int l,i;
    char j;
    for(l=0;*(d+l)!='\0';l++);
    for(i=0;i<l/2;i++){
        j=*(d+i);
        *(d+i)=*(d+l-1);
        *(d+l-1)=j;
        l--;
    }
}