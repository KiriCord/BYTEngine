#pragma one

#include <cmath>

class Math {
    public:
    const float PI = acos(-1.0);
    const float DEG_TO_RAD = PI / 180;
    const float RAD_TO_DEG = 180 / PI;

    template<typename T>
    static T sign(T value) {
        if (value > 0) {
            return 1;
        }
        else {
            return -1;
        }
        return 0;
    }

    float deg(float rad) {
        return rad * Math::RAD_TO_DEG;
    }

    float rad(float deg) {
        return deg * Math::DEG_TO_RAD;
    }
};