#pragma onсe

#include "Vector2.hpp"
#include <math.h>

class Transform
{
    public:
    Transform(const Vector2 &position, const Vector2 &scale);
    ~Transform();
    //Transform &rotate(const Vector2 &axis, float angle);
    Vector2 &Rotate(const Vector2 &point, float angle)
    {
           Vector2 rotated_point;
           rotated_point.x = point.x * cos(angle) - point.y * sin(angle);
           rotated_point.y = point.x * sin(angle) + point.y * cos(angle);
           return rotated_point;
    } 

    Transform &Scale(float scale);
    Transform &Scale(const Vector2 &scale);
    Transform &Translate(const Vector2 &position);

    Transform &SetPosition(const Vector2 &position);
    Transform &SetScale(const Vector2 &scale);
    Transform &SetRotation(const Vector2 &axis, float angle);
    
    Vector2 GetPosition() const;
    Vector2 GetScale() const;
    Vector2 GetRotatio() const;
};