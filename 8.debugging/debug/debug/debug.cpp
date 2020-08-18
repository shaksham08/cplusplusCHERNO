#include <iostream>
#include "log.h"

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    int a = 8;
    a++;
    const char* string = "hello";
    for (int i = 0; i < strlen(string); i++)
    {
        const char c = string[i];
        std::cout << c << " " << std::endl;
    }
    initLog();
    log("hellow world");
    std::cout << "Hello World!\n";
}