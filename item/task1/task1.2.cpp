#include <iostream>

using namespace std;


// 引用本质是指针常量 int * const ref 常量可以变 指针不能变
// void mySwap1(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;

// }

// void mySwap2(int * a, int * b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void mySwap3(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int& test01()
{
    static int a = 10;
    return a;
}

int main()
{
    // int a = 10;
    // int &b = a;
    // cout << b << endl;
    // b = 100;
    // cout << a << endl;
    // return 0;

    // int a = 10;
    // int &b = a;
    // int c = 100;
    // b = c;
    // cout << b << endl;
    // return 0;

    // int a = 10, b = 20;

    // mySwap2(&a, &b);
    // cout << a << endl;
    // cout << b << endl;

    // mySwap3(a, b);
    // cout << a << endl;
    // cout << b << endl;

    // int &ref = test01();

    // cout << "ref = " << ref << endl;
    // cout << "ref = " << ref << endl;
    const int &ref = 10;
    cout << ref << endl;

    return 0;
}