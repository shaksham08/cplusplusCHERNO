# Member initializer list

```c++
#include <iostream>

class Entity
{
private:
    std::string m_Name;
public:
    Entity()
    {
        m_Name = "Unknown";
    }

    Entity(const std::string& name)
    {
        m_Name = name;
    }
};

int main()
{
    Entity e;

    std::cout << "Hello World!\n";
}
```

Normally We use this to initialize the memebrs using the constructors.

This can also be done using member initializer list

```c++
#include <iostream>

class Entity
{
private:
    int m_score;
    std::string m_Name;
public:
    //write the same order in class members are
    Entity(): m_score(0),m_Name("unknown")
    {
    }

    Entity(const std::string& name)
    {
        m_Name = name;
    }
};

int main()
{
    Entity e;

    std::cout << "Hello World!\n";
}
```

We should use member initializer list.

Skipping the ternary operator topic as its easy so GOGGLE IT!!!!
