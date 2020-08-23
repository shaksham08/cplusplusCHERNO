#include <iostream>

class Entity
{
public:
    float X, Y;

    void move(float xa, float ya)
    {
        X = X + xa;
        Y = Y + ya;
    }
};
class Player : public Entity
{
public:
    const char* name;

    void Print(const char* name)
    {
        std::cout << name;
    }
};




int main()
{

    std::cin.get();
    return 0;
}