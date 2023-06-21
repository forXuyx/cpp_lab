//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{
private:
    static int m_A;
};

int Person::m_A = 100;

void test01()
{
    Person p;
}

int main()
{
    test01();
    return 0;
}