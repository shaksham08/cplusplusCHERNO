#include <iostream>

class Player {
public:
    int x, y;
    float speed;


    void move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};



int main()
{
    //Variable that are created from classes are called objects.
    //An object is an instance of a class, and may be called a class instance or class object
    Player playerone;
    Player playertwo;
    playerone.x = 5;
    playerone.y = 10;
    playerone.speed = 4.5;
    playerone.move(1, 1);
}