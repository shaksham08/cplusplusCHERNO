#include <iostream>
#include<string>

class String
{
private: 
	char* buffer;
	unsigned int m_size;

public:
	String(const char* string)
	{
		m_size = strlen(string);
		buffer = new char[m_size+1];
		memcpy(buffer, string, m_size);
		buffer[m_size] = 0;
	}
	//copy constrcutor
	//by default it just does member copy
	String(const String& other) :m_size(other.m_size)
	{
		buffer = new char[m_size + 1];
		memcpy(buffer, other.buffer, m_size);
		buffer[m_size] = 0;
	}

	~String()
	{
		delete[] buffer;
	}
	char& operator[](unsigned int index)
	{
		return buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.buffer; //since this is private so we made this as a freind function
	return stream;
}


int main()
{

	String string = "shaksham";
	String second = string;
	string[2] = 'o';
	std::cout << string<<std::endl;
	std::cout << second<<std::endl;
	return 0;
	
}