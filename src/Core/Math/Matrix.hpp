#include "Vector2.hpp"
#include "Vector3.hpp"

class Matrix {
    //float matrix[2];
    Vector2 matrix[2];
    //static Matrix

    public:
    void invert();
    void transpose();
    void orthonormalization();
    float determinant();

    Vector2 getRow(int value) const;
    Vector2 getColumn(int value) const;
    Vector2 getMainDiagonal() const;

    Vector2 setRow(int value) const;
    Vector2 setColumn(int value) const;
};