#include <iostream>

class Entity
{
private:
    int m_X, m_Y;
public:
    //this can only be used in class
    //this tells that the method cannot modify any value of the pointer using this method
    //Readonly method
    int GetX() const
    {
        return m_X;
    }
    int SetX(int x)
    {
        m_X = x;
    }
};

int main()
{
    const int b = 5;
    //we cannot change a value
    int* a = new int;
    *a = 2;
    a = (int*)&b;
    //here we are breaking the rule

    const int* m = new int;
    //this tell we cannot change the content of the pointer
    // we can change the pointer to point somehting else

    int* const k = new int;
    //this we can change the content of the pointer but cannot reassign this.
    std::cout << "Hello World!\n";

    const int* const j = new int;
    //here we cannot change anything
}
