#include <iostream>

#include "matrix2d.h"

int main()
{
    Matrix2d m(4, 4);

    float v[][4] = {
        {1,2,3,4},
        {1,2,3,5},
        {2,3,4,5}
    };

    for (int l = 0; l < m.ylen(); l++) m.push(v[l]);

    std::cout << m;
}
