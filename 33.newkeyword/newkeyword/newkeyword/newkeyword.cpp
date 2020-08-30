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
