#include<iostream>

int main()
{
	int a = 5;
	int* ptr = &a;

	*ptr = 10;
	std::cout << a;
	char* buffer = new char[8];
	memset(buffer, 1, 8);
	char** ptrtwo = &buffer;
	delete[] buffer;
	return 0;
}