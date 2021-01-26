# Error in C++

- How compilation process work

1. Preprocess First
2. Compiled -> generate binary code
3. Linking happens (we include a header files)

Types of Error

1. Syntax Error
2. Symantic Error
3. Linker Error
4. Runtime Error
5. Logical Error

**Explanation**

1. Syntax Error = Just like english we have syntax error here as well
2. Symantic Error = When statements dosent make any sense -> example : 16=x;
3. Linker error = Calling a function in linking phase and the defination of function dosent exist then it causes error

```c++
#include <iostream>
using namespace std;
void fun();

int main()
{
    fun(); //this will throw a linker error
    return 0;
}
```

4. Runtime Error = It occurs when our program is running. These error are very dangerous.

example = x/y where y=0;

5. Logical Error = Error in logic of the code
