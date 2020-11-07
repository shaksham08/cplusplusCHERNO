# Static Array In C++

```c++
#include <iostream>
#include <string>
#include <array>

int main()
{
    //New Style
    std::array<int, 5> data;
    data[0] = 2;
    data[1] = 3;

    //old Type
    int dataOld[5];
    std::cout << "Hello World!\n";
}
```

```c++
#include <iostream>
#include <string>
#include <array>

void PrintArray(std::array<int,5>&data)
{
    for (int i = 0; i < data.size();)
    {

    }
}

int main()
{
    //New Style
    std::array<int, 5> data;
    data[0] = 2;
    data[1] = 3;

    //old Type
    int dataOld[5];
    std::cout << "Hello World!\n";
}
```

This is also stored in Stack

- It also Does Bound Checking like if we try to access other memory then it will not to anything(in Debug Level)
