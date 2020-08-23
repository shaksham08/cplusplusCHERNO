# Functions

Functions are basically blocks of codes which is made to perform some specific task.

```c++
#include <iostream>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    unsigned int num = 8;
    std::cout << sizeof(num);
    std::cout << multiply(10, 2)<<std::endl;
    std::cout << multiply(50, 2)<<std::endl;
}
```

Everytime we call a function , then we have to put evertyhing into stack and then jump to function and again back to again where we called the function.So we should not use this everywhere.

This can be solved using inline funciton.

for that just put the inline keyword before the function declaration

```c++
inline void print()
{
    cout<<"Hello world;
}
```

Now a days compiler are smart enogh and make short funcitons inline automatically.
