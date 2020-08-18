# Debugging

Two Big Parts of Debugging :

1. Break Points
2. Memory

We will set Break points to look at the memory.

Breakpoint is a point in our program where the debugger pause the execution and let us take a look at the state/memory.

```c++
#include <iostream>
#include "log.h"

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    int a = 8;
    a++;
    const char* string = "hello";
    for (int i = 0; i < strlen(string); i++)
    {
        const char c = string[i];
        std::cout << c << " " << std::endl;
    }
    initLog();
    log("hellow world");
    std::cout << "Hello World!\n";
}
```

&a - will give the location of a variable
