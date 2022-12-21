#include <iostream>

#include "matrix2d.h"

int main()
{
    Matrix2d m(4, 4);

    float v[][4] = {
        {1,2,3,4},
        {0,6,9,5},
        {2,8,1,6},
        {5,1,2,3}
    };

    m = v[0];

    std::cout << m;
}
