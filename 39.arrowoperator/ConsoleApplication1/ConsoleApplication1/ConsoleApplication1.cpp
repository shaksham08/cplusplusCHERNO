#include <iostream>

class Entity
{
public:
    void Print() const { std::cout << "Hello" << std::endl; }
};

int main()
{
    Entity e;
    e.Print();
    //here we dont get any issue

    //but if we have the entioty object as a pointer so we cant use . 

    Entity* ptr = &e;
    (*ptr).Print(); // we have to use something like this but it dosent look good so we can use arrow operator


    ptr->Print();

}
