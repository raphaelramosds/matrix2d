#include "matrix2d.h"

#include <iostream>

Matrix2d::Matrix2d(int _nl, int _nc)
    : nl(_nc),
      nc(_nc),
      count(0)
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

// Get # of cols and lines

int Matrix2d::xlen() { return nc; }
int Matrix2d::ylen() { return nl; }

// Access elements at the line l and col c

float &Matrix2d::operator()(int l, int c) { return m[l][c]; }
float Matrix2d::operator()(int l, int c) const { return m[l][c]; }

// Print matrix on the stantard output stream

std::ostream &operator<<(std::ostream &os, Matrix2d &m)
{
    for (int l = 0; l < m.ylen(); l++)
    {
        for (int c = 0; c < m.xlen(); c++)
            os << m(l, c) << " ";
        os << std::endl;
    }

    return os;
}

// Converts a local allocated matrix into a dinamically one

void Matrix2d::operator=(float *v)
{
    for (int l = 0; l < nl; l++)
    {
        float *temp = v + l * nc; // step to another line

        for (int c = 0; c < nc; c++)
            m[l][c] = *(temp + c);
    }
}