#ifndef MATRIX2D_H
#define MATRIX2D_H

class Matrix2d
{
    int nl;
    int nc;
    float **m;

    public:
    
        Matrix2d(int _nl, int _nc);
        ~Matrix2d();

        int getDimx();
        int getDimy();

        float& operator[](int index);
        Matrix2d operator*(Matrix2d x);
        Matrix2d operator+(Matrix2d x);
        Matrix2d operator-(Matrix2d x);
};

#endif