#include <graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    line (250, 200, 200, 400);
    line (250, 200, 300, 400);
    line (150, 250, 300, 400);
    line (150, 250, 350, 270);
    line (200, 400, 350, 270);

    getch();

    closegraph();
}
