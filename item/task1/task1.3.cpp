#include <iostream>

using namespace std;

int func(int a, int b = 20, int c = 10)
{
    return a + b + c;
}

int func2(int a, int b);

int func2(int a, int b)
{
    return a + b;
}

int main()
{

    cout << func(10, 90) << endl;

    return 0;
}