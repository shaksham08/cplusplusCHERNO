# Header Files

Consider this as out main

```c++
#include <iostream>

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    log("hellow world");
    std::cout << "Hello World!\n";
}
```

Here we have declared and also ddefined the funtion log which prints a message

Now take another c++ while which make use of this log funciton

```c++
void initLog()
{
	log("hellos world");
}
```

But it will give compiler error as it dosent know where the log funciton exists.

So to avoid this we can declare the funtion above and tell it that the funtion exists but its defined somewhere else.

```c++
void log(const char* message);

void initLog()
{
	log("hellos world");
}
```

Now it wont give any error.

So take another example where there are so many files which uses the log funciton so we have to declare it in every cpp file, YES and it will be really tidious so here it when **header files** comes to picture.

So lets create a header files

**log.h**

```c++
#pragma once
void log(const char* message);
```

Now we can use this header file in any cpp files.

**log.cpp file**

```c++
#include "log.h"

void initLog()
{
	log("hellos world");
}
```

Now we wont get any error

```c++
#include <iostream>
#include "log.h"

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    initLog();
    log("hellow world");
    std::cout << "Hello World!\n";
}
```

Now coming to **#pragma once**
We know that anything start with # is a preprocessor command

pragma = is a instruction which tells to include this header files only once in one translational unit .ie a cpp file.

Lets take an example to prove this , here we are commenitng the pragma statement

```c++
//#pragma once
struct car{};
void log(const char* message);
void initLog();
```

And now if we include this header files two times in a cpp file then it will give cope error as there will be same struct two times

```c++
#include "log.h"
#include "log.h"

void initLog()
{
	log("hellos world");
}
```

Another way of doing this is using **ifndef** preprocessor

```c++
//#pragma once

#ifndef _LOG_H_
#define _LOG_H_
struct car{};
void log(const char* message);
void initLog();
#endif
```

It just tells if _LOG_H_ is defined then it wont copy these , if its not defined then it will copy these

This type of headerguards was alot used in past but now new preprocessor staement **#pragma once** comes.

Here we can notice that there is no iostream.h but instead there is only iostream ,, this was done by the developers to differentiate between the c and c++ library.

HEader files mainly include

1. #define directives

2. structure delcarations

3. typedef statements

4. function prototypes

Note:- It dosent containt the implementaiton of that functions or the body.
