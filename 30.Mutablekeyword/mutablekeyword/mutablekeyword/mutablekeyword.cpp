#include <iostream>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
public:
    const std::string& GetName() const
    {
        m_DebugCount++;
        //Now if we want to increment the count which we cant as this is constant so we have to remove this 
        //but again the problem with const object so we would not be able to as this is not constant
       
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.GetName();
    //since this is a const object so we can only call methods which are marked as const
    std::cout << "Hello World!\n";

    //one more use of mutable is for lambdas

    int t = 8;
    //this is a lambda which is a little throaway function which we can assign to a variable
    auto f = [=]() mutable
    {
        t++;
        //here we cannot change the value of t
        //so to solve this just add the mutable keyword

        //this just copies this to another value and increment it and then print , so this will not affect the orginal 
        std::cout << t << std::endl;
    };

   // we can write = for by value and & for reference in lambda

    return 0;
}

