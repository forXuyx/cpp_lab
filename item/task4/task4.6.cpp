//
// Created by 52318 on 2023/6/22.
//
#include "iostream"

using namespace std;

class MyAdd
{
public:
    int operator() (int num1, int num2)
    {
        return num1 + num2;
    }
};

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test()
{
    MyPrint myPrint;

    myPrint("hello world");
}

void test02()
{
    MyAdd myAdd;

    int ret = myAdd(100, 90);

    cout << ret << endl;

    cout << MyAdd()(20, 50) << endl;
}

int main()
{
    test();
    test02();

    return 0;
}