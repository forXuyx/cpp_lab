//
// Created by 52318 on 2023/6/21.
//
#include "iostream"

using namespace std;

class Person
{
public:
    int age;

    Person(int age)
    {
        this->age = age;
    }

    Person& Personaddage(Person &p)
    {
        this->age += p.age;
        return *this;
    }
};

void test()
{
    Person p(18);

    Person p2(10);

    p.Personaddage(p2).Personaddage(p2).Personaddage(p);
    cout << p.age << endl;
}

int main()
{
    test();
    return 0;
}