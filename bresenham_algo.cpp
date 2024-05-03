#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd,gm;
    gd = DETECT;

    int x1,y1,x2,y2;

    cout <<"Enter starting points: ";
    cin >>x1>>y1;

    cout <<"Enter ending points: ";
    cin >>x2>>y2;

    initgraph(&gd, &gm,"");

    int dx = x2-x1;
    int dy = y2-y1;
    int x = x1;
    int y = y1;
    int p = 2*dy-dx;

    while(x<=x2)
    {
        if(p<0)
        {
            putpixel(x,y,RED);
            p = p+2*dy;
            x++;
            delay(100);
        }
        else
        {
            putpixel(x,y,WHITE);
            p = p+2*(dy-dx);
            x++;
            y++;
            delay(100);
        }
    }
    getch();
    closegraph();
}

