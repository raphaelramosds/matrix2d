#include "matrix2d.h"

#include <iostream>

Matrix2d::Matrix2d(int _nl, int _nc)
    : nl(_nc),
      nc(_nc)
{
    m = new float *[_nl];

    m[0] = new float[_nl * _nc];

    for (int l = 1; l < _nl; l++)
        m[l] = m[l - 1] + _nc;

    for (int l = 0; l < _nl; l++)
        for (int c = 0; c < _nc; c++)
            m[l][c] = 0;
}

Matrix2d::~Matrix2d()
{
    delete m[0];
    delete m;
}

int Matrix2d::xlen()
{
    return nc;
}

int Matrix2d::ylen()
{
    return nl;
}

float &Matrix2d::operator()(int l, int c)
{
    return m[l][c];
}

float Matrix2d::operator()(int l, int c) const
{
    return m[l][c];
}

std::ostream &operator<<(std::ostream &os, Matrix2d &m)
{
    for (int l = 0; l < m.xlen(); l++)
    {
        for (int c = 0; c < m.ylen(); c++)
            os << m(l, c) << " ";
        os << std::endl;
    }
    return os;
}