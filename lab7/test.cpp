#include <iostream>

using namespace std;

template<typename T>
T myadd(T x, T y)
{
    return x + y;
}

struct Point
{
    /* data */
    int x;
    int y;
};

template<>
Point myadd<Point>(Point pt1, Point pt2)
{
    Point pt;
    pt.x = pt1.x + pt2.x;
    pt.y = pt1.y + pt2.y;
    return pt;
}


int main()
{

    Point pt1 {1, 2};
    Point pt2 {2, 3};

    Point pt = myadd(pt1, pt2);
    cout << pt.x << pt.y << endl;

    return 0;
}