#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3,y3,c;
    double nx1, ny1, nx2, ny2, nx3, ny3;

    cout<<"Enter the first coordinate points of a line: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate points of a line: ";
    cin>>x2>>y2;
    cout<<"Enter the 3rd coordinate points of a line: ";
    cin>>x3>>y3;

    cout<<"Enter the operation you want: ";
    cin>>c;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);


    if(c == 1)
    {
        cout<<"Enter the translation factor of a line: ";
        double tx,ty;
        cin>>tx>>ty;

        nx1 = x1+tx;
        ny1 = y1+ty;
        nx2 = x2+tx;
        ny2 = y2+ty;
        nx3 = x3+tx;
        ny3 = y3+ty;

        setcolor(RED);
        line(nx1,ny1,nx2,ny2);
        line(nx2,ny2,nx3,ny3);
        line(nx3,ny3,nx1,ny1);

    }
    else if(c==2)
    {
        double angle;
        cin>>angle;

        double radianAngle = (angle*3.1416)/180;

        nx1 = floor (abs(x1*cos(radianAngle) - y1*sin(radianAngle)));
        ny1 = floor (abs(x1*sin(radianAngle) + y1*cos(radianAngle)));
        nx2 = floor (abs(x2*cos(radianAngle) - y2*sin(radianAngle)));
        ny2 = floor (abs(x2*sin(radianAngle) + y2*cos(radianAngle)));
        nx3 = floor (abs(x3*cos(radianAngle) - y3*sin(radianAngle)));
        ny3 = floor (abs(x3*sin(radianAngle) + y3*cos(radianAngle)));

        setcolor(RED);
        line(nx1,ny1,nx2,ny2);
        line(nx2,ny2,nx3,ny3);
        line(nx3,ny3,nx1,ny1);

    }
    getch();
    closegraph();
}
