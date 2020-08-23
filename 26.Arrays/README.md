# Arrays

This is used to store collection of data in contigious location.

```c++

#include <iostream>

int main()
{
    int example[5];
    //we can access using index like example[1]
    for (int i = 0; i < 5; i++)
        example[i] = 5;
    std::cout << "Hello World!\n";
}
```

array is just pointer to first location

We can access using pointer as well.

```c++
#include <iostream>

int main()
{
    int example[5];
    int* ptr = example;
    //we can access using index like example[1]
    for (int i = 0; i < 5; i++)
        example[i] = 5;

    *(ptr + 1) = 8; /// this will change location 1 value to 8

    std::cout << "Hello World!\n";
}
```

```c++

#include <iostream>

int main()
{
    int example[5];
    int* ptr = example;
    //we can access using index like example[1]
    for (int i = 0; i < 5; i++)
        example[i] = 5;

    *(ptr + 1) = 8; /// this will change location 1 value to 8

    //this is created using heap will actually alive until we destroy or till the program is running
    ///we hace to delete this using delete
    int* another = new int[5];

    for (int i = 0; i < 5; i++)
        another[i] = 4;
    delete[] another;


    std::cout << "Hello World!\n";
}
```
