#ifndef MATRIX2D_H
#define MATRIX2D_H

#include <iostream>

class Matrix2d
{
    int nl;
    int nc;
    float **m;

    int count;

public:
    Matrix2d(int _nl, int _nc);
    ~Matrix2d();

    int xlen();
    int ylen();
    
    float &operator()(int l, int c);
    float operator()(int l, int c) const;
    void operator=(float* v);
    friend std::ostream &operator<<(std::ostream &os, Matrix2d &m);
};

#endif