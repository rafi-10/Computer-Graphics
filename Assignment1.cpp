#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the vertices of the triangle
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 150;
    int x3 = 150, y3 = 250;

    // Draw the original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Scale the triangle by a factor of 2
    int sx = 2, sy = 2;
    x1 *= sx; y1 *= sy;
    x2 *= sx; y2 *= sy;
    x3 *= sx; y3 *= sy;

    // Draw the scaled triangle
    setcolor(YELLOW);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Mirror the triangle along the x-axis
    y1 = getmaxy() - y1;
    y2 = getmaxy() - y2;
    y3 = getmaxy() - y3;

    // Draw the mirrored triangle
    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
    return 0;
}
