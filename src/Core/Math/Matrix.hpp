#include "Vector2.hpp"
#include "Vector3.hpp"

class Matrix {
    //float matrix[2];
    Vector2 matrix[2];
    //static Matrix

    public:
    void Invert();
    void Transpose();
    void Orthonormalization();
    float Determinant();

    Vector2 GetRow(int value) const;
    Vector2 GetColumn(int value) const;
    Vector2 GetMainDiagonal() const;

    Vector2 SetRow(int value) const;
    Vector2 SetColumn(int value) const;
};