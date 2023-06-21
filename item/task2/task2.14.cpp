//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{
public:
    static void func()
    {
        a = 100;
        cout << "static void func调用" << Person::a <<  endl;
    }

    static int a;
};

int Person::a = 1;

void test()
{
    Person p;

    p.func();

    Person::func();
}

int main()
{
    test();
    return 0;
}