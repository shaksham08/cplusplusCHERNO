# Timing in c++

- How fast our program is runnning or its taking

- c++ has a chrono library

```c++
#include <iostream>
#include <thread>
#include <chrono>


int main()
{
	using namespace std::literals::chrono_literals;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float> duration = end - start;
	std::cout << duration.count() << "s"<<std::endl;

	std::cin.get();
}
```

```c++
#include <iostream>
#include <thread>
#include <chrono>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 100.0f;
		std::cout << "Timer took : " << ms << "ms" << std::endl;
	}
};

void Function()
{
	Timer timer;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "hello"<<i << std::endl;
	}
}

int main()
{
	Function();

	std::cin.get();
}
```
