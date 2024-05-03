#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3,y3,dx,dy;
    int option;

    cout<<"Enter the first coordinate points of a line: ";
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate points of a line: ";
    cin>>x2>>y2;
    cout<<"Enter the 3rd coordinate points of a line: ";
    cin>>x3>>y3;

    cout<<"\n\nFor Scaling operation press -->> 1\nFor Mirror operation press  -->> 2"<<endl;
    cin>>option;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");


    switch(option){
    case 1:
        line(x1,y1,x3,y3);
        line(x3,y3,x2,y2);
        line(x2,y2,x1,y1);

        cout<<"Enter the Scaling Factor dx: ";
        cin>> dx;
        cout<< "Enter the Scaling Factor dy: ";
        cin>>dy;

        setcolor(BLUE);
        line(x1*dx,y1*dy,x3*dx,y3*dy);
        line(x3*dx,y3*dy,x2*dx,y2*dy);
        line(x2*dx,y2*dy,x1*dx,y1*dy);

    break;

    case 2:
        int x_axis = getmaxx();
        int y_axis = getmaxy();
        int x = x_axis / 2;
        int y = y_axis / 2;

        line(0, y, x_axis, y);
        line(x, 0, x, y_axis);

        line(x + x1, y - y1, x + x2, y - y2);
        line(x + x2, y - y2, x + x3, y - y3);
        line(x + x3, y - y3, x + x1, y - y1);

        setcolor(RED);

        y1 = -y1;
        y2 = -y2;
        y3 = -y3;

        line(x + x1, y - y1, x + x2, y - y2);
        line(x + x2, y - y2, x + x3, y - y3);
        line(x + x3, y - y3, x + x1, y - y1);

    break;
    }

    getch();
    closegraph();

    return 0;
}
