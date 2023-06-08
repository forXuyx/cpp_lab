//
// Created by xyx on 23-6-8.
//
#include <stdio.h>
#include "iostream"
using namespace std;

union data{
    int n;
    char ch;
    short m;
};

int main()
{
    union data a;
    printf("%d, %d\n", sizeof(a), sizeof(union data));
    a.n = 0x40;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m = 0x2059; // 0010 0000 0101 1001
    char c = 'Y';
    cout << int(c) << endl; // Y == 9 + 16 +64 = 89
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);

    return 0;
}