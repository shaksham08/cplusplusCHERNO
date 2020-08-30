# IMPLICIT AND EXPLICIT in C++

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
    int age;
public:
    Entity(const String& name) :m_name(name), age(-1) {};
    Entity(int age) :m_name("unknown"), age(age) {};
    const String& getName() const
    {
        return m_name;
    }
};

int main()
{
    Entity a("cherno");
    Entity b(20);
    Entity c = 27; // this is implicit copnversion as 27 is converted to entity using its constructor
    Entity d = String("Shaksham"); // Here also there is implicit conversion
}
```

We generally dont write this like this.

Now coming to Explicit keyword disables the implicit conversion.
The to change we need to explicityly cast but it wont automatically implicit change that.

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
    int age;
public:
    explicit Entity(const String& name) :m_name(name), age(-1) {};
    explicit Entity(int age) :m_name("unknown"), age(age) {};
    const String& getName() const
    {
        return m_name;
    }
};

int main()
{
    Entity a("cherno");
    Entity b(20);
    Entity c = 27;
    Entity d = String("Shaksham"); //Now we cant do this as this is explicit
    Entity f = Entity("shaksham"); //here we cast this which solves this

}
```
