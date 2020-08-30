#include <iostream>


class Entity {
public:
    int x, y;
    Entity(int x, int y)
    {
        //here its entity pointer
        this->x = x;
        this->y = y;
    }
    int GetX() const
    {
        //here this is const entity pointer
        return this->x;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
