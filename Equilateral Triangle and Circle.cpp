#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;
void DDALine(int x1, int y1, int x2, int y2, int color);
int main()
{
 int x1, y1, x2, y2, r, r1, Color;
 int gd, gm;
 gd = DETECT;
 initgraph(&gd, &gm, NULL);
 cleardevice(); 
which clear the screem in graphics mode and set the current position to (0,0)
 // call the functions
 DDALine(100, 113, 50, 200, 10);
 DDALine(50, 200, 150, 200, 10);
 DDALine(150, 200, 100, 113, 10);
 r = 50 / sqrt(3);
 x1 = (100 + 50 + 150) / 3;
 y1 = (113 + 200 + 200) / 3;
 circle(x1, y1, r);
 r1 = 100 / sqrt(3);
 circle(x1, y1, r1);
 delay(10000);
 return 0;
}
void DDALine(int x1, int y1, int x2, int y2, int Color)
{
 float dX, dY, Steps;
 float xinc, yinc, i, x, y;
 dX = x2 - x1;
 dY = y2 - y1;
 if (abs(dX) > abs(dY))
 {
 Steps = abs(dX);
 }
 else
 {
 Steps = abs(dY);
 }
 xinc = dX / Steps;
 yinc = dY / Steps;
 x = x1;
 y = y1;
 for (i = 1; i <= Steps; i++)
 {
 putpixel(x, y, Color);
 x = x + xinc;
 y = y + yinc;
 }
}
