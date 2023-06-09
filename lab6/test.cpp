#include <iostream>

using namespace std;

inline float max_fun(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

#define MAX_MACRD(a, b) (a) > (b) ? (a) : (b)

int main()
{

    float a, b;
    cin >> a >> b;

    int max_num = max_fun(a, b);
    cout << max_num << endl;

    max_num = MAX_MACRD(a, b);
    cout << max_num << endl;

    return 0;
}