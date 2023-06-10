#include <iostream>

using namespace std;

// 如何记忆？const 在 *前 则为常量指针，在后则为指针常量 然后记住后面的才能改
int main()
{
    int a = 10, b = 20;
    const int * a0 = &a; // 常量指针 在后面的可以改 所以这个是指针指向可以改

    a0 = &b;

    int * const b0 = &a; // 指针常量 常量可以改 指针不能改

    *b0 = 100;

    return 0;

}