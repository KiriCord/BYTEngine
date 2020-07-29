#include "vector2.h"

Vector2 Vector2::normalize()
{
    float normal_scale = 1.0 / (this->x * this->x + this->y * this->y);
    return Vector2(this->x / normal_scale, this->y / normal_scale);
}