// draw a circle with colours

#include<graphics.h>

    int main(){
        int gd=0,gm;
        intitgraph(&gd,&gm,"c:\\bgi");
        setcolour(YELLOW);
        circle(300,200,70);
        return 0;
        closegraph();
    }