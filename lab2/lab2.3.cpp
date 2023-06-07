//
// Created by xyx on 23-6-7.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(15);
    float f1 = 1.0f;
    cout<<"f1 = "<<f1<<endl;

    float a = 0.1f;
    float f2 = a+a+a+a+a+a+a+a+a+a;
    cout<<"f2 = "<<f2<<endl;

    if(f1 == f2)
        cout << "f1 = f2" << endl;
    else
        cout << "f1 != f2" << endl;

    return 0;
}

/* In computers, floating-point numbers are randomly selected values in an interval, so precision is lost.
 * We can set the value to .15f to see what happened */
