//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace  std;

class Person
{
public:
    int m_A;
    int m_B;

};

ostream & operator<<(ostream &cout, Person &p)
{
    cout << p.m_A << " " << p.m_B << endl;
    return cout;
}

void test()
{
    Person p;
    p.m_A = 10;
    p.m_B = 10;

    cout << p << endl;
}

int main()
{
    test();

    return 0;
}