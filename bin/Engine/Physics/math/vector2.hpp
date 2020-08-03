#pragma once
#include <iostream>


struct Vector2
{
    float x, y;

public:

    Vector2();

    Vector2(float _x, float _y);

    Vector2(float _num);

    Vector2 normalize();

    float magnitude();

    //Vector2 by Vector2
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator*(const Vector2& vector) const;
    Vector2 operator/(const Vector2& vector) const;
    void operator+=(const Vector2& vector);
	void operator-=(const Vector2& vector);
	void operator*=(const Vector2& vector);
	void operator/=(const Vector2& vector);

    //Boolean
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;

	//Vector2 Vector2::rotate(float degree);     Moved rotate to transform

    //Print
    friend std::ostream& operator<<( std::ostream& is,const Vector2& vector);
    
};
