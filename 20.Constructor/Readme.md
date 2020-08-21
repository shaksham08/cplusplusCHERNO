# Constructor

A method which runs everytimre runs when we create a object from the class

```c++
#include <iostream>

class Entity
{
public:
    float x;
    float y;

    void Init()
    {
        x = 0.0f;
        y = 0.0f;
    }
    void Print()
    {
        std::cout << x << " , " << y << std::endl;
    }
};

int main()
{
    Entity ent;
    ent.Init();
    ent.Print();
    return 0;
}
```

To initialize this we have written the init function
and that too call it again and again.

So this can be easily solved by constructor

```c++
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
```

note : If we dont write a constructor then there is the default constructor which does nothing.
