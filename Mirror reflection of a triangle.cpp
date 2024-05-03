#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, " ");

  //drawing Axis
  int x_axis = getmaxx();
  int y_axis = getmaxy();
  int x = x_axis / 2;
  int y = y_axis / 2;
  line(0, y, x_axis, y);
  line(x, 0, x, y_axis);

  int x1, y1, x2, y2, x3, y3;
  cout<<"Enter x1 & y1): ";
  cin>>x1>>y1;
  cout<<"Enter x2 & y2: ";
  cin>>x2>>y2;
  cout<<"Enter x3 & y3): ";
  cin>>x3>>y3;


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

  getch();
  closegraph();
  return 0;
}
