# References

References are just desguised pointers.

```c++
#include <iostream>

int main()
{
    int a = 10;
    int& ref = a;
    ref = 20;

    std::cout <<a;
}
```

Here the ref just is an alias of a so there is only one variable not two.

```c++
#include <iostream>

void increment(int var)
{
    var++;

}

int main()
{
    int a = 10;
    increment(a);
    std::cout <<a;
}
```

Here this will not increase the value of a as it just make a copy of a in var and increases that by one.

So this can be done by two things

1. pointer
2. reference

```c++
#include <iostream>

void increment(int* var)
{
    (*var)++;

}

int main()
{
    int a = 10;
    increment(&a);
    std::cout <<a;
}
```

This is using the pointer but this is long and for this we will use reference which make things simpler

```c++
#include <iostream>

void increment(int& var)
{
    var++;

}

int main()
{
    int a = 10;
    increment(a);
    std::cout <<a;
}
```

Pointers are more powerful than reference but wherever there reference can be used then we should use this.

Note :- we canot change the reference to point other after initializing.

We need to assign something while initializing becauseits not a real variable but its just only a alias.
