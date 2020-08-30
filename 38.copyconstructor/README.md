# Copy constructor

Copying refers to copy memory or data.
A lot of time we want to copy objects but many time we want to make it optimize and stop unncessary copying.
We can also remove copying.

```c++
#include <iostream>

struct Vector2 {

    float x, y;
};


int main()
{
    int a = 2;
    int b = a;
    //here we are copying the value of a to b
    //with classes also this works the same way;
    Vector2 va = { 2,3 };
    Vector2 vb = va; //here we are just copying

    Vector2* vg = new Vector2();
    Vector2* vj = vg; //this is going to be different as vg is a pointer
    //now both willbe pointing the same value as its copying same position
    //we are copying the memory address
    std::cout << "Hello World!\n";
}
```

So with this in mind lets write the string class and make it copyable

```c++
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
	std::cout << string;
	return 0;

}
```

Above we are not deleting the pointer so we can use delete keyword in the destructor of the class

Now lets try to copy the String

```c++
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
	~String()
	{
		delete[] buffer;
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
	std::cout << string;
	std::cout << second;
	return 0;

}
```

Here c++ just takes whatever member we have and takes its value and copy that, What we have now we have it has done the shallow copy i.e it has copied the memory address , i.e the memory address of the buffer is same.

here we copying the string, so shaksham will be printed twice but once the program exits what will happen is both the object will try to delete the buffer , when second one try to delete, then the first one already has deleted that so this gives the error.

Trying to delete the same memory twice.

```c++
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
	std::cout << string;
	std::cout << second;
	return 0;

}
```

Uisng the above code we can see that both the string changes but we are making the changes in only one.

To avoid this we can make deep copy and not the shallow copy.
Shallow copy is not gonna go to the content oof the pointer and copy that as well.

Deep copy does both , so we have to write a copy constructor.

c++ provide default copy constructor

```c++
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
```

Now this works prefectly fine.
