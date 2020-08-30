# This keyword

```c++
#include <iostream>

class Entity {
public:
    int x, y;
    Entity(int x, int y)
    {
        //here we get confused with which x we are referencing to
        x = x;
        y = y;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
```
