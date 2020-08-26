#pragma onсe

#include "vector2.hpp"
#include <math.h>

class Transform
{
    public:
    Transform(const Vector2 &position, const Vector2 &scale);
    ~Transform();
    //Transform &rotate(const Vector2 &axis, float angle);
    Vector2 &rotate(const Vector2 &point, float angle)
    {
           Vector2 rotated_point;
           rotated_point.x = point.x * cos(angle) - point.y * sin(angle);
           rotated_point.y = point.x * sin(angle) + point.y * cos(angle);
           return rotated_point;
    } 

    Transform &scale(float scale);
    Transform &scale(const Vector2 &scale);
    Transform &translate(const Vector2 &position);

    Transform &setPosition(const Vector2 &position);
    Transform &setScale(const Vector2 &scale);
    Transform &setRotation(const Vector2 &axis, float angle);
    
    Vector2 getPosition() const;
    Vector2 getScale() const;
    Vector2 getRotatio() const;
};