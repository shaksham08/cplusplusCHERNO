#include <iostream>

class Entity
{
public:
    float x;
    float y;
    Entity()
    {
        x = 0.0f;
        y = 0.0f;
    }

    Entity(float xv, float yv)
    {
        x = xv;
        y = yv;
    }

    void Print()
    {
        std::cout << x << " , " << y << std::endl;
    }
};

int main()
{
    Entity ent(10, 5);
    ent.Print();
    return 0;
}