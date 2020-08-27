#include <iostream>

class Entity
{
private:
    int m_score;
    std::string m_Name;
public:
    //write the same order in class members are
    Entity(): m_score(0),m_Name("unknown")
    {
    }

    Entity(const std::string& name)
    {
        m_Name = name;
    }
};

int main()
{
    Entity e;

    std::cout << "Hello World!\n";
}
