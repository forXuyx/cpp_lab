//
// Created by 52318 on 2023/6/23.
//
#include "iostream"

using namespace std;

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1
{
    void func()
    {
        m_A = 10;
        m_B = 20;
    }
};

int main()
{
    return 0;
}