//
// Created by 52318 on 2023/6/23.
//
#include "iostream"

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "base" << endl;
    }

    ~Base()
    {
        cout << "base" << endl;
    }
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son :public Base
{
public:
    Son()
    {
        cout << "son" << endl;
    }
    ~Son()
    {
        cout << "son" << endl;
    }
public:
    int m_D;
};

int main()
{
    Son son;

    cout << sizeof son << endl;

    return 0;
}