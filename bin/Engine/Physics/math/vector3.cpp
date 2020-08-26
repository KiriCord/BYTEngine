#include "vector3.hpp"
#include <math.h>

Vector3::Vector3() : x(0), y(0), z(0) {}

Vector3::Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

Vector3::Vector3(float num) : x(num), y(num), z(num) {}

Vector3 Vector3::normalize()
{
    float normal_scale = 1.0 / this->magnitude();
    return *this / normal_scale;
}

float Vector3::magnitude()
{
    return sqrt(x * x + y * y + z * z);
}

// Vector function
Vector3 Vectormulty(const Vector3& vector1, const Vector3& vector2)
{
    Vector3 result;
    result.x = vector1.y * vector2.z - vector1.z * vector2.y;
    result.y = vector1.z * vector2.x - vector1.x * vector2.z;
    result.z = vector1.x * vector2.y - vector1.y * vector2.x;
    return result;
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

//Vector3 by num

Vector3 Vector3::operator*(const float& num) const
{
    return Vector3(x * num, y * num, z * num);
}


bool Vector3::operator==(const Vector3 &vector) const {
    Vector3 one = *this;
    one = one.normalize();
    Vector3 other = vector;
    other = other.normalize();

    return one.x == other.x && one.y == other.y && one.z == other.z;
}

bool Vector3::operator!=(const Vector3 &vector) const {
    return !(*this == vector);
} 