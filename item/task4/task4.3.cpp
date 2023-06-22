//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class MyInterger
{
    friend ostream& operator<<(ostream &cout, MyInterger myint);
public:
    MyInterger()
    {
        m_Num = 0;
    }

    MyInterger& operator++()
    {
        m_Num ++ ;
        return *this;
    }

    MyInterger operator++(int)
    {
        MyInterger temp = *this;

        m_Num ++ ;
        return temp;
    }

    MyInterger& operator--()
    {
        m_Num -- ;
        return *this;
    }

    MyInterger operator--(int)
    {
        MyInterger temp = *this;

        m_Num -- ;
        return temp;
    }
private:
    int m_Num;
};

ostream& operator<<(ostream &cout, MyInterger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test()
{
    MyInterger myint;

    cout << myint++ << endl;
}

int main()
{
    test();

    return 0;
}