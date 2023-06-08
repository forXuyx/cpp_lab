//
// Created by xyx on 23-6-8.
//
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum;
    while(n >0){
        sum += n;
        cout << "n = " << n << "  ";
        cout << "sum = " << sum << "  ";
        n -- ;
    }

    return 0;

}
