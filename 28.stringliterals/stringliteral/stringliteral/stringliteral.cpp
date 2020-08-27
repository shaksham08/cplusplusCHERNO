
#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
	std::string name = "shaksham" + "sinha";
	//we cannot add two string like this as this is a pointer
	//so the solutioon is to surround with a constructorto make it a string
	// before storing in name "shaksham" is just a char* pointer  
	std::string name1 = std::string("shaksham") + "sinha";

	//Now in C++14 there is one more solution 
	std::string name1 = "shaksham"s + "sinha";

	const char* example = R"(LIne1
LINE2
LINE3)";
	//this helps to write a paragraph
	return 0;
}
