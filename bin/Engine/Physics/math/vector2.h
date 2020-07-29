

struct Vector2
{
    float x, y;

    void normalize();

    //Vector2 by Vector2
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator*(const Vector2& vector) const;
    Vector2 operator/(const Vector2& vector) const;
    Vector2& operator+=(const Vector2& vector);
	Vector2& operator-=(const Vector2& vector);
	Vector2& operator*=(const Vector2& vector);
	Vector2& operator/=(const Vector2& vector);

    //Vector2 by float
    Vector2 operator+(float const& num) const;
    Vector2 operator-(float const& num) const;
    Vector2 operator*(float const& num) const;
    Vector2 operator/(float const& num) const;
    Vector2& operator+=(float const& num);
	Vector2& operator-=(float const& num);
	Vector2& operator*=(float const& num);
	Vector2& operator/=(float const& num);

    //Boolean
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;

    //Print
    friend std::ostream& operator<<( std::ostream& is,const Vector2& vector);
};
