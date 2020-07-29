#include <iostream>

struct Vector2
{
    float x, y;

    Vector2(float _x, float _y) :x(_x), y(_y){}

    Vector2 normalize();

    float length();

    //Vector2 by Vector2
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator*(const Vector2& vector) const;
    Vector2 operator/(const Vector2& vector) const;
    void operator+=(const Vector2& vector);
	void operator-=(const Vector2& vector);
	void operator*=(const Vector2& vector);
	void operator/=(const Vector2& vector);

    //Vector2 by float
    Vector2 operator+(float const& num) const;
    Vector2 operator-(float const& num) const;
    Vector2 operator*(float const& num) const;
    Vector2 operator/(float const& num) const;
    void operator+=(float const& num);
	void operator-=(float const& num);
	void operator*=(float const& num);
	void operator/=(float const& num);

    //Boolean
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;

    //Print
    friend std::ostream& operator<<( std::ostream& is,const Vector2& vector);
    
};
