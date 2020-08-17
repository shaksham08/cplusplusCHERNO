# How Linker Works

The primary function of linker is to find where each symbol is and then combine them into one binary file.

Linker not only works when we have many c++ files and want to combine but it also works when we only have one c++ file then it has to know there the entry point is , which is by default main function.

So it has to link the main funcition

Note: - Entry point can also be changed , it can be anything

```c++
#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

int multiply(int a, int b)
{
	Log("multiply");
	return a * b;
}



int main()
{
	std::cout<<multiply(5, 10)<<std::endl;
	std::cin.get();
	return 0;
}
```
