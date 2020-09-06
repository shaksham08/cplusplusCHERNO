#include <iostream>
#include "GLFW/glfw3.h"

int main()
{
    int a = glfwInit();
    std::cout << a << std::endl;

    std::cout << "Hello World!\n";
}