# Funciton Pointer

A funciton Pointer is are just a way to assign a funciton to a variable.

So far for now we just made it to use like we just call whenever we want to use that.

But using this even with this we can pass functions also.

```c++
#include <iostream>

void HelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

int main()
{
    auto function = HelloWorld;//This is a getting memory address
    std::cin.get();
}
```

```c++
#include <iostream>

void HelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

int main()
{
    auto function = HelloWorld;//This is a getting memory address
    function();
    function();
    std::cin.get();
}
```

- This gives the output perfectly
  s

Now coming to what type it is

```c++
#include <iostream>

void HelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

int main()
{
    void(*shaksham)();

    shaksham = HelloWorld;//This is a getting memory address
    shaksham();
    shaksham();
    std::cin.get();
}
```

```c++
#include <iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World " <<a<< std::endl;
}

int main()
{
   typedef void(*HelloWorldFunction)(int);
    HelloWorldFunction shaksham;
    shaksham = HelloWorld;
    shaksham(5);
    shaksham(10);
    std::cin.get();
}
```

Some useFul Use of these

```c++
#include <iostream>
#include<vector>

void PrintValue(int value)
{
    std::cout << value << std::endl;
}

void forEach(std::vector<int>& values,void(*func)(int))
{
    for (int value : values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = { 1,2,3,4,5 };
    forEach(values, PrintValue);
    std::cin.get();
}
```
