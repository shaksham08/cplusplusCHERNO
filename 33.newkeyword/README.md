# NEW Keyword

The main purpose is to allocate memory on heap;
Size depends on the type we are storing.

While we create memory we need to find free memory, once that it finds then it needs to read and write, so it takes time.

Its not that slow that we think but its slow.

New keywork is just a operator, so one can overload this as well.
It returns a void pointer.

Whenever we use new keyword we have to use delete keyword.

```c++
#include <iostream>
#include<string>
using String = std::string;

class Entity {
private:
    String m_name;
public:
    Entity() :m_name("Unknown") {};
    Entity(const String& name) :m_name(name) {};
    const String& getName() const
    {
        return m_name;
    }
};

int main()
{
    int a = 2;
    int* b = new int;
    *b = 2;
    int* k = new int[50]; //200 bytes
    Entity* e = new Entity; //it only alocates the memory
    Entity* e1 = new Entity[200];
    Entity* e2 = new Entity(); //  we can even call the constructor
    delete[] k;
    delete b;
}
```
