#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main ()
{

    float x1,x2,x3,y1,y2,y3,rx1,rx2,rx3,ry1,ry2,ry3,angle;

    cout<<"Enter Co-Ordinate of a(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter Co-Ordinate of b(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Co-Ordinate of c(x3, y3): ";
    cin>>x3>>y3;

    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    //plotting the triangle
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    //Rotation
    cout<<endl<<"Enter Rotation Angle: ";
    cin>>angle;
    float radian = (angle*3.1416)/180;
    rx1 = floor (abs(x1*cos(radian) - y1*sin(radian)));
    ry1 = floor (abs(y1*cos(radian) + x1*sin(radian)));
    rx2 = floor (abs(x2*cos(radian) - y2*sin(radian)));
    ry2 = floor (abs(y2*cos(radian) + x2*sin(radian)));
    rx3 = floor (abs(x3*cos(radian) - y3*sin(radian)));
    ry3 = floor (abs(y3*cos(radian) + x3*sin(radian)));

    setcolor(GREEN);
    line(rx1,ry1,rx2,ry2);
    line(rx2,ry2,rx3,ry3);
    line(rx3,ry3,x1,ry1);

    getch();
    closegraph();

    return 0;
}
