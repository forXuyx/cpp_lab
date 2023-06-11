#include <iostream>

using namespace std;

class A
{
    int a;
};

struct B
{
    /* data */
    int b;
};


int main()
{
    A a;
    B b;

    cout << a.a << endl;

    return 0; 
}