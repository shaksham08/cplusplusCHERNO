# Namespace in C++

```c++
#include <iostream>
#include<vector>
#include <functional>
#include <string>
#include <algorithm>

namespace apple {
    void print(const char* text)
    {
        std::cout << text << std::endl;
    }
}
namespace orange {
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}


int main()
{
    apple::print("Hello");
    orange::print("Hello");
    std::cin.get();
}
```

In real world big programs it abvoids naming conflicts.

If we want to call same name with different context then we make use of namespace.

It is really helpful while we make use of many library which may make use of same funtions name.

```c++
#include <iostream>
#include<vector>
#include <functional>
#include <string>
#include <algorithm>


namespace apple {
    namespace functions {
        void print(const char* text)
        {
            std::cout << text << std::endl;
        }
    }
}

namespace orange {
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}



int main()
{
    apple::functions::print("Hello");
    orange::print("Hello");
    std::cin.get();
}
```
