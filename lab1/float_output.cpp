//
// Created by xyx on 23-6-7.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 0.1, b = 0.2, c = 0.3;

    // c style
    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);

    // c++ style
    // type 1 note: #include<iomanip> needed
    // cout << setiosflags(ios::fixed) << setprecision(2);
    // cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // type2
    // cout.setf(ios::fixed);
    // cout << setprecision(2);
    // cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // type 3
    cout << fixed << setprecision(2);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;


    return 0;
}