#include <iostream>

#include "matrix2d.h"

int main () {

    Matrix2d *a;

    a = new Matrix2d(3,3);

    std::cout << a[0][2] << std::endl;
    std::cout << a[2][2] << std::endl;

}