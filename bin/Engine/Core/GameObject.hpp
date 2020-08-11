#pragma once

#include <string>
#include "bin/Engine/Physics/math/vector2.hpp"

class GameObject
{
    private:
        std::string nameObject;
        Vector2 position;
        Vector2 direction;
        float scale;
    public:
    
    GameObject();

};