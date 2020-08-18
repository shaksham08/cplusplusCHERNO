# static in class/struct

If we make a variable in a class then there will be only one copy of that variable in all the instance.
The same goes with the methods as well.

```c++
#include <iostream>

struct Entity {
    int x, y;
    void Print()
    {
        std::cout <<x<< " , " << y << std::endl;
    }
};

int main()
{
    Entity e1;
    e1.x = 2;
    e1.y = 5;
    e1.Print();
    Entity e2;
    e2.x = 10;
    e2.y = 5;
    e2.Print();
}
```

```c++
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
```

static function can only handle static variables.
