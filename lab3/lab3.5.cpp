//
// Created by xyx on 23-6-8.
//
#include <iostream>
using namespace std;

int main()
{
    int n = 1,fa = 1;

    do{
        fa *= n;
        n++;
    }while(n <= 10);

    cout << "fa = " << fa << endl;

    return 0;
}

// n, fa need init