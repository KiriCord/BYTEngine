#pragma onсe

#include <cmath>


class Math {
    public:
    const double PI = acos(-1.0);
    const double DEG_TO_RAD = PI / 180;
    const double RAD_TO_DEG = 180 / PI;

    static int sign(float value) {
        if (value == 0)
            return 0;

        return value > 0 ? 1: -1;        
    }

    float deg(float rad) {
        return rad * Math::RAD_TO_DEG;
    }

    float rad(float deg) {
        return deg * Math::DEG_TO_RAD;
    }
};