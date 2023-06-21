//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{
public:
    int m_A;
    mutable int m_B;
    void showPerson() const
    {
        m_B = 100;
    }
};

int main()
{
    return 0;
}