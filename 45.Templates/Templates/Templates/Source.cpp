#include <iostream>
#include <string>
template<typename t,int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

int main()
{
	Array<int,5> array;
	std::cout << array.GetSize()<<std::endl;
	return 0;
}