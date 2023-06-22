//
// Created by 52318 on 2023/6/22.
//
#include "iostream"

using namespace std;

class Person
{
public:
    int *m_Age;

    Person(int age)
    {
        m_Age = new int(age);
    }

    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }

    Person& operator=(Person &p)
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }

        m_Age = new int(*p.m_Age);

        return * this;
    }
};

void test()
{
    Person p1(18);
    Person p2(20);
    Person p3(40);
    p2 = p1 = p3;
    cout << *p2.m_Age << endl;
}

int main()
{
    test();

    return 0;
}