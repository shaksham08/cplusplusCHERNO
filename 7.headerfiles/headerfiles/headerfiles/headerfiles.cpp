#include <iostream>
#include "log.h"

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    initLog();
    log("hellow world");
    std::cout << "Hello World!\n";
}

