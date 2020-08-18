
#include <iostream>

void increment(int& var)
{
    var++;

}

int main()
{
    int a = 10;
    increment(a);
    std::cout <<a;
}
