# Mutable

Mutable is something like const but which can change

```c++
#include <iostream>

class Entity
{
private:
    std::string m_Name;
    int m_DebugCount = 0;
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
    //since this is a const object so we can only call methods which are marked as const
    std::cout << "Hello World!\n";
}
```

So the solution for this is mutable keyword which allows const methods allows to change this.

```c++
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
}
```
