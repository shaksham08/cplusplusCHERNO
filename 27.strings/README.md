# Strings

Group of text is called string.

There is a data type in c++ called char.
This is also used for strings.

There are many different character encoding like utf-8,utf-16

For utf-8 we get 2 to power 8 bits i.e 256 different characters but using this we cannot show all the symmbols like jpnaese , emoji etc.
SO we can use utf-16.

In c++ char is only one byte.If we are need other language then we have to use other charcter encoding.

A string is basically an array of characters.

```c++


#include <iostream>

int main()
{
    //this is c style strings.
    //const char* name = "Shakham";
    //we use const because strings are immutable so.
    //these are not heap allocated so we dont need to delete this.

   // name[2] = 'a';
    //We cannot modify this.

    //SO to modify this we need to remove const from that.

    const char* lastname = "cherno";
    std::cout << "Hello World!\n";
}
```

The string begins from the memory pointer to first character and end is denoted by null character('\0').

We can even write just 0 in place or '\0'

There is a standard class called string.

```c++
#include <iostream>
#include <string>

int main()
{
	std::string s = "hello world";
	//its a const char array
	std:: cout << s;
	s.size(); //gives the size of the stirng
	s[1] = 'h';

	return 0;
}
```

```c++


#include <iostream>
#include <string>

int main()
{
	std::string s = "hello world";
	std::string name = "jjsjdd";
	//+ symbol is using overloaded in this string class
	bool contains = s.find("wo") != std::string::npos;
	s = s + name;
	//its a const char array
	std:: cout << s;
	s.size(); //gives the size of the stirng
	s[1] = 'h';

	return 0;
}
```

```c++
#include <iostream>
#include <string>


//passing string to a function like this actually copies and slows the performance
void printstring(std::string name)
{
	std::cout << name << std::endl;
}

//so its better to  send the string as  reference and if we want to make it only readable just add the const
void printstring(const std::string& name)
{
	std::cout << name << std::endl;
}

int main()
{
	std::string s = "hello world";
	std::string name = "jjsjdd";
	//+ symbol is using overloaded in this string class
	bool contains = s.find("wo") != std::string::npos;
	s = s + name;
	//its a const char array
	std:: cout << s;
	s.size(); //gives the size of the stirng
	s[1] = 'h';

	return 0;
}
```
