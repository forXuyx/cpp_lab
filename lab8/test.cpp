#include <iostream>
#include <omp.h>

using namespace std;

int main()
{

    #pragma omp parallel for
    for (size_t i = 0; i < 10; i ++ )

    return 0;
}