#include <graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    line (200, 150, 250, 150);
    line (270, 100, 250, 150);
    line (270, 100, 290, 150);
    line (290, 150, 340, 170);
    line (200, 150, 230, 190);
    line (230, 190, 210, 240);
    line (210, 240, 260, 220);
    line (260, 220, 300, 250);
    line (300, 250, 300, 200);
    line (300, 200, 340, 170);


    getch();

    closegraph();
}
