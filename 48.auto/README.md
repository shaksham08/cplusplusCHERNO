# AUTO Keyword

```c++
#include <iostream>
#include <string>

int main()
{
	int a = 5;
    auto b = a;//This automatically chganges

	std::cin.get();
}
```

here c++ takes care of this itself.

```c++
#include<iostream.h>
#include<typeinfo>
int main()
{
	auto a=10;
	auto b=15;
	std::cout<<a<<"\n"<<b;
	cout<<typeid(a).name()<<"\n";
	cout<<typeid(b).name()<<"\n";
	return 0;
}

10
15.5

```
