#include <point.h>

void Point::setPos(int a, int b)
{
    x = a;
    y = b;
}

vector<int> Point::getPos()
{
    return {x, y};
}
