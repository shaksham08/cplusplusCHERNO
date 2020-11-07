# Lambdas

Lambdas are way to create anonymous functions

Whenver we have funciton pointer we can use lambdas

```c++
#include <iostream>
#include<vector>



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
    forEach(values, [](int value)
        {
            std::cout << value << std::endl;
        });
    std::cin.get();
}
```

```c++
#include <iostream>
#include<vector>



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

    auto lambda = [](int value)
    {
        std::cout << value << std::endl;
    };
    forEach(values,lambda);
    std::cin.get();
}
```

What if we want to put outside variables inside the lambda then what to do

[Lambda Reference](https://www.youtube.com/redirect?q=http%3A%2F%2Fen.cppreference.com%2Fw%2Fcpp%2Flanguage%2Flambda&redir_token=QUFFLUhqbWFjUU8tNkZoSkVaNTgyRTRDMm9fR05ybkNwQXxBQ3Jtc0tscm1fREJFdGdubjhyOERTX1U0Y1ZmOXlYX2syRDF2bTBnOWhFNERhZ2o5bmNKdlgydjkyNnVfWGk3S0ZPdDNnZGhkNmU5R3o3REg3NUxUMmE3cHN6Q3NYUXVFbm1zUmtjSC0xbG5zeEx1aHd5Nk1MSQ%3D%3D&event=video_description&v=mWgmBBz0y8c)

```c++
#include <iostream>
#include<vector>
#include <functional>



void forEach(std::vector<int>& values,const std::function<void(int)>& func)
{
    for (int value : values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = { 1,2,3,4,5 };
    int a = 5;
    auto lambda = [=](int value)
    {
        std::cout << a << std::endl;
    };
    forEach(values, lambda);
    std::cin.get();
}
```
