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
