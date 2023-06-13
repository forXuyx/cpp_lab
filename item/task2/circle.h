#pragma once
#include <iostream>
#include <vector>
#include <point.h>

using namespace std;

class Circle
{
private:
    Point p;
    int r;

public:

    void setR(int a);

    int getR();
};