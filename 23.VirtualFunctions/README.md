# Virtual Function

It allows us to overwrite methods in subclass

```c++
#include <iostream>

class Entity
{
public:

    std::string GetName() { return "Entitty"; }
};
 class Player:public Entity
{
private:

    std::string m_name;
public:
    Player(const std::string name)
    {
        m_name = name;
    }
    std::string GetName() {
        return m_name;
   }
};

 void PrintName(Entity* entity)
 {
     std::cout << entity->GetName() << std::endl;
}


int main()
{
    Entity* e = new Entity();
    PrintName(e); //We get output as entity
    Player* p = new Player("shaksham");
    PrintName(p); // we get output as entitty
    std::cin.get();
    return 0;
}
```

But the player function should have printed my name but its printitng the entity from the entity class.

Here the problem is that we are calling print name From and Entity but we want to make realize c++ that the print Funtion we are calling from is a Player which is a child and not Entity.

So to solve this we just ad a virtual before the base class.

```c++
#include <iostream>

class Entity
{
public:

   virtual std::string GetName() { return "Entitty"; }
};
 class Player:public Entity
{
private:

    std::string m_name;
public:
    Player(const std::string name)
    {
        m_name = name;
    }
    std::string GetName() {
        return m_name;
   }
};

 void PrintName(Entity* entity)
 {
     std::cout << entity->GetName() << std::endl;
}


int main()
{
    Entity* e = new Entity();
    PrintName(e); //We get output as entity
    Player* p = new Player("shaksham");
    PrintName(p); // we get output as shaksham
    std::cin.get();
    return 0;
}
```

The is a new funciton in c++ 11 which is overrivde

```c++
#include <iostream>

class Entity
{
public:

   virtual std::string GetName() { return "Entitty"; }
};
 class Player:public Entity
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
    Entity* e = new Entity();
    PrintName(e); //We get output as entity
    Player* p = new Player("shaksham");
    PrintName(p); // we get output as shaksham
    std::cin.get();
    return 0;
}
```

override tells that is there same function name or not so it help in debugging.

This virtual actually makes vtable.
