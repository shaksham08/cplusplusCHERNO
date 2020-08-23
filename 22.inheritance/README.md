# Inheritance

Inheritance allow us to heirarchy of classes which relate to each other.

This avoid us the code duplication, we can put the common funciton in main class(Base class) and make subclass from it.

```c++
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
class Player
{
public:
    const char* name;
    float X, Y;

    void move(float xa, float ya)
    {
        X = X + xa;
        Y = Y + ya;
    }
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
```

Here we can see that both player and the entitiy have same data and functions

```c++
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
```

Now the Player class looks clean.

Player will always have all entitiy have and more also.
