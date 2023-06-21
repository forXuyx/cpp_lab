//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{
public:
    int m_A;
    int m_B;
    Person(int x, int y): m_A(x), m_B(y) {}
//    Person operator+(Person &p)
//    {
//        Person temp(0, 0);
//        temp.m_A = this->m_A + p.m_A;
//        temp.m_B = this->m_B + p.m_B;
//        return temp;
//    }
};

Person operator+(Person &p1, Person &p2)
{
    Person temp(0, 0);
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

void test()
{
    Person p(1, 2);
    Person p2(3, 4);

    Person p3 = p + p2;

    cout << p3.m_A << p3.m_B << endl;
}

int main()
{

    test();
    return 0;
}