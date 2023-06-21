//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{

};

void test()
{
    Person p;

    cout << sizeof(p) << endl;
}

int main()
{
    test();
    return 0;
}