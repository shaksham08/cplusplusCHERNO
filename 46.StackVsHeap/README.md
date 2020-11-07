# Stack Vs Heap Memory

When our program start it divides into many kind of memory.

The main would be the stack and heap.

The stack and heap are two area inside our ram

Stack - predifned size usually around 2MB<br/>
Heap: dynamic and changes the size as application goes on

memory in our program are used to store our data.Stack and heap are area where we store data.They work very differently.

The difference is how it allocates memory for us.Eg for integer we need 4 byte so how we find that contigious 4 bytes of memory.

```c++
#include <iostream>

int main()
{
    //Using Stack
    int value = 5;
    int arr[5];


    //using Heap
    int* hvalue = new int;
    *hvalue = 5;
    int* harr = new int[5];

    delete hvalue;
    delete harr;


    std::cin.get();
}
```

The Stack memory are close to each other.
memory is stored on top of each other.(in between the memory adress there can be a guard memory whil in debugging mode)

This is really Fast as we just need to move the stack pointer thats it.(Its extremly Fast)

When coming to heap the memory is not near to each other.

In case of Stack it just Pop everything which is just one cpu instruction and fast but in case of Heap we need to manually delete the memory.

the new keyword calls a keyword malloc which certainly talks to OS and asks for memory and then it go through FreeList(list of free memoory) and then we assign and then give that poointer back to that memory location.

Allocating memory in heap is more tasks but alloocating the memory on stack is just one CPU instruction.

The Big difference between the Two is allocation.

If we can we should always use Stack and only use HEAP when we cant use STACK
