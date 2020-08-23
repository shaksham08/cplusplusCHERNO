# Visibility in c++

1. private
2. public
3. protected

Private

```c++
#include <iostream>


class Entity
{
private:
    int x, y;//default is set to private
public:
    Entity() {
        x = 0, y = 0;
    }
};
class Player :public Entity
{
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
```

Protected

This means that the class and its sub class can only aceesss the members but we cannot access it outside it;

```c++
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
```

public - this we can access anywhere in subclass and asweell as outside it also.

making everything public is bad idea as style of writing of code only, this has not to do with performnance.

If we mark something as private then it tells that we should not access it outside of it.
