#include <iostream>
using namespace std;

void func(int &a)
{
    cout << "no const" << endl;
}

void func(const int &a)
{
    cout << "const" << endl;
}

int main()
{
    int a = 10;
    func(a);

    return 0;
}