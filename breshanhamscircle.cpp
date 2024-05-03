#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void drawCircle(int x,int y,int xc,int yc){

    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc-y, YELLOW);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, YELLOW);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc-x, YELLOW);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, YELLOW);
}

int main()
{
    int gd= DETECT, gm;
    int  xc,yc,r;

    cout<<"Enter the x,y & r point:";
    cin>>xc>>yc>>r;

    initgraph(&gd, &gm," ");

    int d = 3-2*(r);
    int x = 0, y =r;

    while(x<=y)
    {
        drawCircle(x,y,xc, yc);
        if (d<0)
        {
            d= d+4*(x)+6;
            x++;
            delay(50);
        }
        else
        {
            d=d+4*(x-y)+10;
            x++;
            y--;
            delay(50);
        }
    }

    getch();
    closegraph();
}






