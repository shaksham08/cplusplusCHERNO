# Sorting in C++

```c++
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> a = { 5,4,7,8,5 };
	std::sort(a.begin(), a.end(),std::greater<int>());

	for (auto x : a)
	{
		std::cout << x << std::endl;
	}
	std::cin.get();
	return 0;
}
```

```c++
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> a = { 5,4,7,8,5 };
	std::sort(a.begin(), a.end(), [](int a, int b)
		{
			return a > b;

		});

	for (auto x : a)
	{
		std::cout << x << std::endl;
	}
	std::cin.get();
	return 0;
}
```
