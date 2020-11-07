# Threads in C++

- So for all code we have been writing was single thread (one instructions at a time)

- Like when we take input then the exectuion stops till the input is provided but with thread we can use that time to do something else

- There is main thread which start of the worker thread which does its work then by join we tell in main thread to wait till the worker thread is done.

```c++
#include <iostream>
#include <thread>

static bool s_Finished =false;

void Dowork()
{
	while (!s_Finished)
	{
		std::cout << "working...\n";
	}
}

int main()
{
	std::thread worker(Dowork); //this keeps running util we stop it

	std::cin.get();
	s_Finished = true;

	worker.join(); //this stops that thread execution

	std::cin.get();
}
```

- making the thread run for every one second

```c++
#include <iostream>
#include <thread>

static bool s_Finished =false;

void Dowork()
{
	using namespace std::literals::chrono_literals;
	while (!s_Finished)
	{
		std::cout << "working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(Dowork); //this keeps running util we stop it

	std::cin.get();
	s_Finished = true;

	worker.join(); //this stops that thread execution

	std::cin.get();
}
```

```c++
#include <iostream>
#include <thread>

static bool s_Finished =false;

void Dowork()
{
	using namespace std::literals::chrono_literals;
	while (!s_Finished)
	{
		std::cout << "working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(Dowork); //this keeps running util we stop it

	std::cin.get();
	s_Finished = true;

	worker.join(); //this stops that thread execution


	std::cout << "Finished...";
	std::cin.get();
}
```

- std::this_thread is used to give some command to current thread

```c++
#include <iostream>
#include <thread>

static bool s_Finished =false;

void Dowork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread with id : " << std::this_thread::get_id() << std::endl;

	while (!s_Finished)
	{
		std::cout << "working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(Dowork); //this keeps running util we stop it

	std::cin.get();
	s_Finished = true;

	worker.join(); //this stops that thread execution


	std::cout << "Finished...";
	std::cout << "Started thread with id : " << std::this_thread::get_id() << std::endl;

	std::cin.get();
}
```
