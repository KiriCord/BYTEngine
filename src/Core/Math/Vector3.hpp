#pragma once

#include <iostream>

struct Vector3
{
    float x, y, z;

    public:

    Vector3();

    Vector3(float _x, float _y, float _z);

    Vector3(float _num);

    Vector3 Normalize();

    float Magnitude();
    
// funtions
    Vector3 Vectormulty(const Vector3& vector1, const Vector3& vector2);


    //Vector3 by Vector3
    Vector3 operator+(const Vector3& vector) const;
    Vector3 operator-(const Vector3& vector) const;
    Vector3 operator*(const Vector3& vector) const;
    Vector3 operator/(const Vector3& vector) const;
    void operator+=(const Vector3& vector);
	void operator-=(const Vector3& vector);
	void operator*=(const Vector3& vector);
	void operator/=(const Vector3& vector);

    //Vector3 by num
    Vector3 operator*(const float& num) const;
    
    //Boolean
    bool operator==(const Vector3& vector) const;
    bool operator!=(const Vector3& vector) const;

    //Print
    friend std::ostream& operator<<( std::ostream& is,const Vector3& vector);
};