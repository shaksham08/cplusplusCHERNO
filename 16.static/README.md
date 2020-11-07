# Static in C++

Static in c++ means two meaning

1. OUtside class/struct - linkage of the symbol is internal , its visible only throgh that transtaltional unit
2. Inside class or struct - visible to all instance of class, i.e there will be only one copy of that variable and same for the methods also.

Consider two cpp files

test.cpp

```c++
static int s_Variable = 5;
```

Now consider the main.cpp file

```c++
#include <iostream>

int s_Variable = 10;
int main()
{
    std::cout << "Hello World!\n";
    std::cout<<s_Variable;
}

```

Here we have again defined the same variable and try to compile then the program will run successfuly and print 10.

But if we remove the static keyword from the test.cpp file then the compiler will not work as it will give error that there are to same variable.We will get the linking error.

One possible way to fix is also by making the variable as extern and also remove the static keyword as only that variable can be used in other translational unit.

```c++
#include <iostream>

extern int s_Variable;
int main()
{
    std::cout << "Hello World!\n";
    std::cout << s_Variable;
}
```

test.cpp

```c++
int s_Variable = 5;
```

THis is same making a variable as private;

Try to make things static unless we dont need them to be linked across translational unit.
