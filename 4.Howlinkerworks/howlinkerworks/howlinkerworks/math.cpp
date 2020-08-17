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