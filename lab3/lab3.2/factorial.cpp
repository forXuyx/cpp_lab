//
// Created by xyx on 23-6-7.
//
#include "functions.h"

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}