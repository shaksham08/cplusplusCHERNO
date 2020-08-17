# Variables in C++

Soring data in a program, then variables comes.

There are two places where variables can store

1. Stack
2. heap

There are primitive data types are given.
Using those only we can create even others.
Each of them has their own work and size\

int - 4bytes (depend on compiler) - limitied to what kind of numbers we can store : -2billion to 2 billion

```c++


#include <iostream>

int main()
{
    int num = 8;
    std::cout << num;
}
```

1byte = 8bits

4bytes = 32bits

Since its signed then one bit has to be for sign

so we are left for 31 bits

Then the possibility is 2 to power 31 which is around 2 billion

If we want to remove the sign and use only postive then we can use _unsigned int_

hence for this we get 2 to power 32 bits

```c++
#include <iostream>

int main()
{
    unsigned int num = 8;
    std::cout << num;
}
```

Basic data types for integer :

1. char - generally 1 byte
2. short
3. long
4. long long

Note : we can use unsigned for everybody

For decimal we can use :

1. float - 4bytes
2. double - 8bytes

Bool data type : 1byte data

1. true - any other number than 0
2. false - 0

Why it it bye. Since accesing bit is tough we need more data to access it so we store it is as byte

```c++
#include <iostream>

int main()
{
    unsigned int num = 8;
    std::cout << sizeof(num);
}
```

sizeof operator is used for printing the size of each data types.
