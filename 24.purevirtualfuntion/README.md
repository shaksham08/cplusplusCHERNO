# Pure Virtual Function

A pure virtual function allows us to define a function in base class which does not have derfination and force subclass to add it.

```c++
 virtual std::string GetName() = 0;
```

This zero tells to make this a pure virtual function which means child class has to add it.

```c++
#include <iostream>

class Entity
{
public:

    virtual std::string GetName() = 0;
};
class Player :public Entity
{
private:

    std::string m_name;
public:
    Player(const std::string name)
    {
        m_name = name;
    }
    std::string GetName() override {
        return m_name;
    }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}


int main()
{
    //Entity* e = new Entity();
    //Now we cannot instantiate the base class
    Player* p = new Player("shaksham");
    PrintName(p); // we get output as shaksham
    std::cin.get();
    return 0;
}
```

All subclass has to have that funciton if not then it cannot be instantiated.

This purevirtual function is also known as interface in other languages.

```c++
#include <iostream>

class Printable
{
public:
    virtual std::string GetClassName() = 0;
    virtual std::string GetName() = 0;
};
class Entity :public Printable
{
public:

    std::string GetName() override { return "Entity"; };
    std::string GetClassName() override { return "Entity"; }
};
class Player :public Entity
{
private:

    std::string m_name;
public:
    Player(const std::string name)
    {
        m_name = name;
    }
    std::string GetName(){
        return m_name;
    }
    std::string GetClassName() override { return "PlAYER"; }
};



void Print(Printable*  obj)

{
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    Print(e); // output entity
    Player* p = new Player("shaksham");
    Print(p); //output shaksham
    std::cin.get();
    return 0;
}
```
