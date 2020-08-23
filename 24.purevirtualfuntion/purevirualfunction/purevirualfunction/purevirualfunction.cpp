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
    Print(e);
    Player* p = new Player("shaksham");
    Print(p);
    std::cin.get();
    return 0;
}