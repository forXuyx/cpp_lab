//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class  Building
{
    friend void goodGay(Building &b);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_Bedroom = "卧室";
    }

public:
    string m_SittingRoom;

private:
    string m_Bedroom;
};

void goodGay(Building &b)
{
    cout << b.m_SittingRoom << endl;

    cout << b.m_Bedroom << endl;
}

void test()
{
    Building building;
    goodGay(building);
}

int main()
{
    test();
    return 0;
}