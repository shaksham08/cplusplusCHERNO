
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