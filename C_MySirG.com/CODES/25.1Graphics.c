#include<graphics.h>
int main(){
    int gd=0; // graphics drivers
    int gm; // graphics modes
    initgraph(&gd,&gm,"");
    circle(100,100,70);
    closegraph();
    return 0;
}