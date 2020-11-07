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
        std::cout << "\nCreated";
    }

    ~Entity()
    {
        std::cout << "\nDestroyed";
    }

    Entity(float xv, float yv)
    {
        x = xv;
        y = yv;
        std::cout << "Created\n";
    }

    void Print()
    {
        std::cout << x << " , " << y << std::endl;
    }
};

void function() {
    //constructor called
    Entity ent(10, 5);
    ent.Print();
}

int main()
{
    function();
    //desctuctor called
    //THis waits is to click enter
    std::cin.get();
    return 0;
}