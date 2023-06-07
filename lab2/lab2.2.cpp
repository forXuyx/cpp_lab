//
// Created by xyx on 23-6-7.
//
#include <iostream>

using namespace std;

int main()
{
    long long a = 56789, b = 23456789;

    cout << a * b << endl;

    cout << sizeof(int) << endl;

    return 0;
}

/* Haha, the answer is right. I use the long long to calculate. But note need to taked.
 * If i use the int, the value will overflow.
 * int range from -2^32 to 2^31 - 1*/