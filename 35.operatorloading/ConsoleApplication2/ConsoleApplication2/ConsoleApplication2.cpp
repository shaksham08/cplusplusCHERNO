#include <iostream>
#include<string>
using String = std::string;

struct Vector2
{
	float x, y;
	Vector2(float x, float y) : x(x), y(y) {};

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}
	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}
	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}
	bool operator!=(const Vector2& other) const
	{
		return x != other.x && y != other.y;
	}

};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << " , " << other.y<<std::endl;
	return stream;
}

int main()
{
	Vector2 position(0.4f, 0.5f);
	Vector2 speed(0.7f, 0.8f);
	Vector2 powerup(0.5f, 0.3f);

	Vector2 result = position.Add(speed.Multiply(powerup));
	Vector2 results = position + speed*powerup;
	std::cout << results<< std::endl;//This we cant do
	return 0;
}

