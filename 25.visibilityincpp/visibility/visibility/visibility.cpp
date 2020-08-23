#include <iostream>


class Entity 
{
protected: 
    int x, y;//default is set to private
public:
    Entity() {
        x = 0, y = 0;
    }
};
class Player :public Entity
{
    Player()
    {
        x = 5;
    }
};




int main()
{
    Entity e;
    e.x; // we cant access
    e.y; // we cant access
    //The same applies for funtion as well
    std::cin.get();
    return 0;
}