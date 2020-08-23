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