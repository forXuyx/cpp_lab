#include <iostream>

using namespace std;

class Person
{
    public:
    int age;
    public:
    Person()
    {
        cout << "无参" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "有参" << endl;
    }
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝" << endl;
    }
};

void test01()
{
    Person p;
    Person p1(10);
    Person p2(p1);

    cout << p2.age << endl;
}

int main()
{

    test01();
    return 0;
}