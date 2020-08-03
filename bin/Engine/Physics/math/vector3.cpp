#include "vector3.hpp"

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

Vector3::Vector3(float num) : x(num), y(num), z(num) {}

Vector3 Vector3::normalize()
{
    float normal_scale = 1.0 / sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    return Vector3(this->x / normal_scale, this->y / normal_scale, this->z / normal_scale);
}

float Vector3::magnitude()
{
    return sqrt(x * x + y * y + z * z);
}

/* Vector3 by Vector3 */
Vector3 Vector3::operator+(const Vector3 &vector) const
{
    return Vector3(x + vector.x, y + vector.y, z + vector.z);
}

Vector3 Vector3::operator-(const Vector3 &vector) const
{
    return Vector3(x - vector.x, y - vector.y, z - vector.z);
}

Vector3 Vector3::operator*(const Vector3 &vector) const
{
    return Vector3(x * vector.x, y * vector.y, z * vector.z);
}

Vector3 Vector3::operator/(const Vector3 &vector) const
{
    return Vector3(x / vector.x, y / vector.y, z / vector.z);
}

void Vector3::operator+=(const Vector3 &vector)
{
    x += vector.x;
    y += vector.y;
    z += vector.z;
}

void Vector3::operator-=(const Vector3 &vector)
{
    x -= vector.x;
    y -= vector.y;
    z -= vector.z;
}

void Vector3::operator*=(const Vector3 &vector)
{
    x *= vector.x;
    y *= vector.y;
    z *= vector.z;
}

void Vector3::operator/=(const Vector3 &vector)
{
    x /= vector.x;
    y /= vector.y;
    z /= vector.z;
}

bool Vector3::operator==(const Vector3 &vector) const {
    return x == vector.x && y == vector.y && z == vector.z;
}

bool Vector3::operator!=(const Vector3 &vector) const {
    return x != vector.x || y != vector.y || z != vector.z;
} 