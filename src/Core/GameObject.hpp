#pragma once

#include <string>
#include "Math/Vector2.hpp"

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