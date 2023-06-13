#include <iostream>
#include <vector>
#include <math.h>
#include <circle.h>
#include <point.h>

using namespace std;


double getDis(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    Point p;
    Circle c;

    p.setPos(4, 5);
    c..setPos(1, 4);
    c.setR(1);

    double dis = getDis(p.getPos()[0], p.getPos()[1], c.getPos()[0], c.getPos()[1]);

    if (c.getR() == dis)
        cout << "在圆上" << endl;
    else if (c.getR() < dis)
        cout << "在圆外" << endl;
    else
        cout << "在圆内" << endl;

    return 0;
}