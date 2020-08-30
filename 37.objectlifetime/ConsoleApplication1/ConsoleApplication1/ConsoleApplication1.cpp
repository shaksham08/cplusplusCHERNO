#include <iostream>

class Entity {
public:

    Entity()
    {
        std::cout<<"Created"<<std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed" << std::endl;
    }
};


int main()
{
    {
        std::weak_ptr<Entity> e0;
      {
       
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        e0 = sharedEntity;
       }
      std::cout << "Leaving second scope" << std::endl;
    }

    return 0;
}
