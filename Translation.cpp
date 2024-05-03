#include <iostream>
#include <graphics.h>

using namespace std;

int main ()
{
    //code for installing the graphics driver
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    float x1,x2,x3,y1,y2,y3,tx,ty;

    cout<<"Enter Co-Ordinate of a(x1, y1): ";
    cin>>x1>>y1;
    cout<<"Enter Co-Ordinate of b(x2, y2): ";
    cin>>x2>>y2;
    cout<<"Enter Co-Ordinate of c(x3, y3): ";
    cin>>x3>>y3;

    //plotting the triangle
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    //Translation
    cout<<endl<<"Enter The Translation Factor of a Line (tx, ty): ";
    cin>>tx>>ty;
    //plotting the translated Triangle
    setcolor(GREEN);
    line(x1+tx,y1+ty,x2+tx,y2+ty);
    line(x2+tx,y2+ty,x3+tx,y3+ty);
    line(x3+tx,y3+ty,x1+tx,y1+ty);

    getch();
    closegraph();

    return 0;
}
