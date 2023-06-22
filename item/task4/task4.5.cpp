//
// Created by 52318 on 2023/6/22.
//
#include "iostream"

using namespace std;

class Person
{
public:
    string m_Name;
    int m_Age;

    Person(string name, int age): m_Name(name), m_Age(age) {}

    bool operator==(Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
            return true;
        return false;
    }
};

void test()
{
    Person p1("xyx", 18);
    Person p2("xyx", 18);
    if (p1 == p2) cout << "yes" << endl;
}

int main()
{
    test();

    return 0;
}