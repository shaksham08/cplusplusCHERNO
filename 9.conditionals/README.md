# Conditionals

If statements check some conditions and go to some branch of code i.e other memory locations.

This can also reduce speed so for omtimization.

== -> check queality , this has been overloaded by function

```c++
#include <iostream>

int main()
{
    int x = 5;
    if (x == 5)
    {
        std::cout << "Yes this is equal to five" << std::endl;
    }
    std::cout << "Hello World!\n";
}
```

```c++
#include <iostream>

int main()
{
    int x = 5;
    if (x == 5)
    {
        std::cout << "Yes this is equal to five" << std::endl;
    }
    else if (x == 6)
    {
        std::cout << "Yes this is equal to six" << std::endl;
    }
    else {
        std::cout << "Yes this is equal to other than 5 or 6" << std::endl;
    }
    std::cout << "Hello World!\n";
}
```

Lets see what a namespace is.It solves the problem of name conflict.

Like there may be same name of functions so we can tell compiler using namespace.
