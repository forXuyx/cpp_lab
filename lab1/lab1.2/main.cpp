//
// Created by xyx on 23-6-7.
//
#include <iostream>
#include "add.h"

using namespace std;

int main()
{
    unsigned int num1 = 2147483647;
    unsigned int num2 = 1;
    unsigned int result = 0;

    result = add(num1, num2);

    cout << "The result is " << result << endl;
    return 0;
}