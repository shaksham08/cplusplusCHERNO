# Dont Use -- using namspace std

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

- Taking this last code we see we have used many std functions form the standard library

- But if we use using namespace std we can avoid writing std::

- When we write std:: we can easily know from where i am using this exactly.
