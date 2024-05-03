#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main(){

    int gd ,gm;
    gd = DETECT;

    int x1,y1,x2,y2;

    cout <<"Enter starting points: ";
    cin >>x1>>y1;


    cout <<"Enter ending points: ";
    cin >>x2>>y2;

    initgraph(&gd, &gm,"");

    int dx = x2-x1;
    int dy = y2-y1;

    int m = dy/dx;
    int x = x1;
    int y = y1;

    if (abs(m)<1){
        while(x<=x2){
            putpixel(x,y, GREEN);
            x++;
            y = y+m;
            delay(100);
        }
    }
    else{
        while(y<=y2)
        {
            putpixel(x,y, WHITE);
            y++;
            x = x+(1/m);
            delay(100);
        }
    }
    getch();
    closegraph();
}
