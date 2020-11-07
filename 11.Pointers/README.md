# Pointers

Computer delas with memory. THis is the most important thing in a program.

We cannot do anything without memory.

A pointer is a memory which stores location of other variable.

**A pointer is just an integer which store a memory address.** and the type of it is just meaningless.

If we are giving a type of that pointer then it just only tells which type of variable location we are storing in that.

Note:- \*_Pointer is just a memory adress and i.e is just an integer_

Note:- when a pointer is not storing anything then we can right either NULL or 0

basically NULL is 0 as #define NULL 0 or even we can store **nullptr** which was inroduced in c++ 11

```c++
#include<iostream>

int main()
{
	int a = 5;
	void* ptr = NULL;
	return 0;
}
```

## Dereferencing

```c++
#include<iostream>

int main()
{
	int a = 5;
	void* ptr = &a;
	*ptr = 10;
	return 0;
}
```

Here \*p = 10 will give conpiler error as is dosent know how many bytes to write so here comes where we have to initialize the pointer whil tells okey we have to write 4 bytes.

```c++
#include<iostream>

int main()
{
	int a = 5;
	int* ptr = &a;
	*ptr = 10;
	return 0;
}
```

```c++
#include<iostream>

int main()
{
	int a = 5;
	int* ptr = &a;

	*ptr = 10;
	std::cout << a;
	char* buffer = new char[8];
	memset(buffer, 1, 8);
	delete[] buffer;
	return 0;
}
```

Here we are using new keyword to allocate the memory which actually uses heap memory.

So at end we need to delete this.

using memset() we are storing something in the memory, i.e it takes the staring location , what to store and what is the memory size.
