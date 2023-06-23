//
// Created by 52318 on 2023/6/23.
//
#include "iostream"

using namespace std;

class Base
{
public:
    int m_A;
    Base()
    {
        m_A = 100;
    }
};

class Son :public Base
{
public:
    int m_A;
    Son()
    {
        m_A = 200;
    }
};

int main()
{
    Son son;

    cout << son.m_A << son.Base::m_A << endl;
    return 0;
}