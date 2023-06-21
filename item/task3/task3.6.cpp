//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

// Good Gay
class Building;
class GoodGay
{
public:
    GoodGay();

    void visit();
    void visti2();
    Building * building;
};

// Building
class Building
{
    friend void GoodGay::visit();
public:
    Building();
public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << building->m_SittingRoom << endl;
    cout << building->m_BedRoom << endl;
}

void  GoodGay::visti2()
{
    cout << building->m_SittingRoom << endl;
}

void test()
{
    GoodGay gg;
    gg.visit();
    gg.visti2();
}

int main()
{
    test();

    return 0;
}