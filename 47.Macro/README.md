# Macro

Macro is as simple as that like Find and Replace while preprocessing.

```c++
#include <iostream>
#include <string>

#define WAIT std::cin.get()

int main()
{
    WAIT;
}
```

```c++
#include <iostream>
#include <string>

#define OPEN_CURLY {

int main()
OPEN_CURLY
std::cin.get();
}
```

Some good use of MACRO

```c++
#include <iostream>
#include <string>

#define Log(x) std::cout<<x<<std::endl

int main()
{
	Log("hello");
	std::cin.get();
}
```

One of the main usecase of the macro can be for printing something in debug mode but we dont want to be printed that in release mode.

So in both mode we can define a preprocessor of visualStudio and then use that

```c++
#include <iostream>
#include <string>

#ifdef PR_DEBUG
#define Log(x) std::cout<<x<<std::endl
#else
#define Log(x)
#endif


int main()
{
	Log("hello");
	std::cin.get();
}
```
