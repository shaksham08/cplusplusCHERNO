# String Literal

"shaksham" - this is a string literal

THis will be stored as const char array of 9 size, last will be of null character.

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
