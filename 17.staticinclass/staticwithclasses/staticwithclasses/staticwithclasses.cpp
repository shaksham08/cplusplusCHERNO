

#include <iostream>

struct Entity {
    static int x, y;
    void Print()
    {
        std::cout <<x<< " , " << y << std::endl;
    }
};
int Entity::x;
int Entity::y;
int main()
{
    Entity e1;
    Entity::x = 2;
    Entity::y = 5;
    e1.Print();
    Entity e2;

    e2.Print();
}
