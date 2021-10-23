#include "Vector2.hpp"

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

Vector2::Vector2(float num) : x(num), y(num) {}

Vector2 Vector2::normalize()
{
    float normal_scale = 1.0 / this->magnitude();
    return *this / normal_scale;
}

float Vector2::magnitude()
{
    return sqrt(x * x + y * y);
}

//Functions

// Scalar function
float Scalarmulty (const Vector2& vector1, const Vector2& vector2)
{
    return vector1.x * vector2.x + vector1.y + vector2.y;
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

bool Vector2::operator==(const Vector2 &vector) const {
    Vector2 one = *this;
    one = one.normalize();
    Vector2 other = vector;
    other = other.normalize();

    return one.x == other.x && one.y == other.y;
}

bool Vector2::operator!=(const Vector2 &vector) const {
    return !(*this == vector);
} 

/*Vector2 Vector2::rotate(float degree){      Moved rotate to transform
    double rads = toRad(degree);

    

}*/