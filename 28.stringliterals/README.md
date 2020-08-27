# String Literal

"shaksham" - this is a string literal

This will be stored as const char array of 9 size, last will be of null character.

```c++
#include <iostream>
#include <stdlib.h>

int main()
{
    const char name[9] = "shaksham";
    //Here we cannot change the string as its costant so if we do something like this
    // name[2] = 'b';  //this cannot be possible

    //But if we remove the const keyword then also we cannot say we can change or not, some compiler may generate valid or some may not even run this
    //string literal are generaly stored in read only memory of the Program so its not default to change the string like this.
    //so if we need to modify then use array way
    char nameq[10] = "shaksham";
    nameq[2] = '5';
    std::cout << nameq; //this gives output as a change to 5


}
```

There is also a wide character pointer in c++

```c++

#include <iostream>
#include <stdlib.h>

int main()
{

    const wchar_t*  name2 = L"Shaksham";
       //we need to append L before the string to tell that this is a wide character string
    const char16_t* name3 = u"shaksham";
    const char32_t* name4 = U"shaksham";
}
```

```c++

#include <iostream>
#include <stdlib.h>

int main()
{
    const char* name = u8"shaksham";

    const wchar_t*  name2 = L"Shaksham";
       //we need to append L before the string to tell that this is a wide character string
    const char16_t* name3 = u"shaksham";
    const char32_t* name4 = U"shaksham";
}

// so what is difference between wchar_T and char16_t , as borth store char at 2 byte but wchar_t actually depends on compiler but char_16 is always 16bit , i.e
//byte per character
```

There are different string types as well.

1. wchar_t = wide char (size depends on compiler) , it needs L appended before the string which tells it that this is a widechar

2. char16_t = defined by appending lowercase "u" befire the string

3. char32_t = defined by appending upper case "U" before the string

```c++

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
```
