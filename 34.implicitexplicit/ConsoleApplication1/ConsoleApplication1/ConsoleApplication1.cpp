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
