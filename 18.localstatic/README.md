# Local Static

Static Local scope variable is variable which has its lifetime as unlimited in that scope.

```c++
#include <iostream>

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();
    std::cout << "Hello World!\n";
}
```

```c++
#include <iostream>

class Singleton
{
public:
    static Singleton& Get()
    {
        static Singleton instance;
        return instance;

    }
    void Hello() {}
};

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();
    std::cout << "Hello World!\n";
}
```
