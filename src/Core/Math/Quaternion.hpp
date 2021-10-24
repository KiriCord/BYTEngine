#pragma onсe

template<typename T = float>
class Quaternion {
    public:

        static_assert(std::is_same<T, bool>() || std::is_same<T, int>()
                || std::is_same<T, long>() || std::is_same<T, long long>()
                || std::is_same<T, float>() || std::is_same<T, double>()
                || std::is_same<T, long double>(),
                "Неверный тип для Quaternion");

        Quaternion(T w = 0, T x = 0, T y = 0, T z = 0) : _w(w), _x(x), _y(y), _z(z) {}

        T w() const { return _w; }
        T x() const { return _x; }
        T y() const { return _y; }
        T z() const { return _z; }
};