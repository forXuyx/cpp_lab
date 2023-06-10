#include <iostream>

using namespace std;

int * func()
{
    int * p = new int(10);
    return p;
}

void func2()
{
    int * arr = new int[10];
    
    for (int i = 0; i < 10; i ++ )
        arr[i] = i + 100;

    for (int i = 0; i < 10; i ++ )
        cout << arr[i] << endl;

    delete[] arr;
    for (int i = 0; i < 10; i ++ )
        cout << arr[i] << endl;
}

int main()
{
    func2();

    return 0;
}