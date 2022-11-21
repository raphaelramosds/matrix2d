#include <iostream>

#include "matrix2d.h"

Matrix2d::Matrix2d(int _nl, int _nc) {

    nl = _nl;
    nc = _nc;

    m = new float*[_nl];

    m[0] = new float[_nl * _nc]; 

    for (int j = 1; j < _nl; j++)
        m[j] = m[j - 1] + _nc;
    
    for (int j = 0; j < _nl; j++) 
        for (int k = 0; k < _nc; k++)
            m[j][k] = 0;
}

Matrix2d::~Matrix2d() {

    std::cout << "log: destrutor" << std::endl;
    
    delete m[0];
    delete m;
}

int Matrix2d::getDimx() {
    return nl;
}

int Matrix2d::getDimy() {
    return nc;
}

float& Matrix2d::operator[](int index) {
    
    std::cout << "Linhas: " << nl << std::endl;

    if (index > nl)
        std::cout << "error: invalid index " << index << std::endl;

    return *m[index];
}


Matrix2d Matrix2d::operator*(Matrix2d x) {

}

Matrix2d Matrix2d::operator+(Matrix2d x) {

}

Matrix2d Matrix2d::operator-(Matrix2d x) {

}