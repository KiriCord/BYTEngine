#include "vector2.hpp"
#include "bin/Engine/Physics/extensions.cpp"

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

Vector2::Vector2(float num) : x(num), y(num) {}

Vector2 Vector2::normalize()
{
    float normal_scale = 1.0 / sqrt(this->x * this->x + this->y * this->y);
    return Vector2(this->x / normal_scale, this->y / normal_scale);
}

float Vector2::magnitude()
{
    return sqrt(x * x + y * y);
}

/* Vector2 by Vector2 */
Vector2 Vector2::operator+(const Vector2 &vector) const
{
    return Vector2(x + vector.x, y + vector.y);
}

Vector2 Vector2::operator-(const Vector2 &vector) const
{
    return Vector2(x - vector.x, y - vector.y);
}

Vector2 Vector2::operator*(const Vector2 &vector) const
{
    return Vector2(x * vector.x, y * vector.y);
}

Vector2 Vector2::operator/(const Vector2 &vector) const
{
    return Vector2(x / vector.x, y / vector.y);
}

void Vector2::operator+=(const Vector2 &vector)
{
    x += vector.x;
    y += vector.y;
}

void Vector2::operator-=(const Vector2 &vector)
{
    x -= vector.x;
    y -= vector.y;
}

void Vector2::operator*=(const Vector2 &vector)
{
    x *= vector.x;
    y *= vector.y;
}

void Vector2::operator/=(const Vector2 &vector)
{
    x /= vector.x;
    y /= vector.y;
}

/*Vector2 Vector2::rotate(float degree){      Moved rotate to transform
    double rads = toRad(degree);

    

}*/