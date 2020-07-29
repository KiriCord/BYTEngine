#include "vector2.hpp"

Vector2 Vector2::normalize()
{
    float normal_scale = 1.0 / (this->x * this->x + this->y * this->y);
    return Vector2(this->x / normal_scale, this->y / normal_scale);
}

float Vector2::length() {
    return sqrt(x * x + y * y);
}

/* Vector2 by Vector2 */
Vector2 Vector2::operator+(const Vector2& vector) const {
    return Vector2(x + vector.x, y + vector.y);
}

Vector2 Vector2::operator-(const Vector2& vector) const {
    return Vector2(x - vector.x, y - vector.y);
}

Vector2 Vector2::operator*(const Vector2& vector) const {
    return Vector2(x * vector.x, y * vector.y);
}

Vector2 Vector2::operator/(const Vector2& vector) const {
    return Vector2(x / vector.x, y / vector.y);
}

void Vector2::operator+=(const Vector2& vector) {
    x += vector.x;
    y += vector.y;
}

void Vector2::operator-=(const Vector2& vector) {
    x -= vector.x;
    y -= vector.y;
}

void Vector2::operator*=(const Vector2& vector) {
    x *= vector.x;
    y *= vector.y;
}

void Vector2::operator/=(const Vector2& vector) {
    x /= vector.x;
    y /= vector.y;
}