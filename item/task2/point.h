#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    void setPos(int a, int b);

    vector<int> getPos();
};