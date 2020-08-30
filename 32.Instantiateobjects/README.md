# How to Instantiate Objects in C++

There are two choices,i.e. which memory we want to create object in.

1. Stack
2. Heap

In c++ we can choose where to go.

Stack objects have lifetime of scope, when we go out of scope then the memory gets free.

In heap once we create an object then it remains there and we need to remove it manually.

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
public:
    Entity() :m_name("Unknows") {};
    Entity(const String& name) :m_name(name) {};
    const String& getName() const
    {
        return m_name;
    }
};

int main()
{
    Entity e;//this calls the default constructor
    std::cout<<e.getName()<<std::endl;
    Entity e1("Shaksham");
    std::cout << e1.getName() << std::endl;
}
```

This is one method and if we can create any object like this then we should always use this as this is the fastest and managed way in c++ to create objects.

Now where we dont wannt to use this type

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
public:
    Entity() :m_name("Unknows") {};
    Entity(const String& name) :m_name(name) {};
    const String& getName() const
    {
        return m_name;
    }
};

void Function()
{
    Entity entity = Entity("shaksham");
    //but once we go out of scope we cant use this as its get destroyed from the memory
    //all memory on stack will go

}

int main()
{
    Entity* epoint;
    {
        Entity e;//this calls the default constructor
        std::cout << e.getName() << std::endl;
        Entity e1("Shaksham");
        std::cout << e1.getName() << std::endl;
        epoint = &e1;
        //here the epoint will point to the e1 which has shaksham stored
    }
    //but here if we dereference epoint here then we wont get shaksham as it was destroyed in last scope.
    //one solution is to heap allocate it.
}
```

We mught have to many room to aclocate on stack but the size of stack is less, so we might have to allocate on heap.

So lets see how we can allocate heap type

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
public:
    Entity() :m_name("Unknows") {};
    Entity(const String& name) :m_name(name) {};
    const String& getName() const
    {
        return m_name;
    }
};

int main()
{
    Entity* entity = new Entity("shaksham");
    //performace takes longer and we also have to manually free this memory using free
    delete entity;
    return 0;
}
```
