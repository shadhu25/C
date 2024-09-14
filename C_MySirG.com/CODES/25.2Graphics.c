#include<graphics.h>
int main(){
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(100,100,70);
    // color no. 1 to 15
    setcolor(14);
    rectangle(300,50,450,100);
    setcolor(1);
    line(250,200,500,350);
    setcolor(4);
    ellipse(250,240,0,3606,40,150);
    setcolor(10);
    closegraph();
    return 0;
}