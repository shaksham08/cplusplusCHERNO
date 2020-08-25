

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
