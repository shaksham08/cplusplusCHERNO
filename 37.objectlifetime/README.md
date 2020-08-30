# Object life time

Object lifetime in stack is till the scope only, once we go out.

# Smart Pointers

When we allocate memory on heap then we have to manullay delete that, so smart pointers are the way to automate that process.

When we call new , we dont have to call delete.

1. unique pointer = this is a scope ppointer, when it goes out of scope it dets destroyed.
   We cant copy a unique pointer, it can be only unique;

```c++
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
        std::unique_ptr<Entity> entity(new Entity()); //one way to make unique pointer
        std::unique_ptr<Entity> entity2 = std::make_unique<Entity>(); //this is just to handle exception
    }
    std::cout << "Hello World!\n";
    return 0;
}
```

2. Shared pointer - when all shared pointer die then only the memory is freed;
   Shared pinter create another block of memory where it stores the reference count, i.e how many pointer is pointing to that location

```c++
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
        std::shared_ptr<Entity> e0;
      {

        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        e0 = sharedEntity;
       }
      std::cout << "Leaving second scope" << std::endl;
    }

    return 0;
}
```

Here we can see that if we leave the inner scope the pointer dosent die but once we leave the outer scope the pointer dies as all the shared pointer has been deleted now;

3. weat pointer : it same as shared pointer , but once we define a shared pointer and then make weak pointer poin to that then the pointer count is not inceremented. The weak pointer is just kept as a normal.

```c++
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
```

here the pointer is destroyed once we exit the first scope only;

We should always use smart pointers as they automate our memory management;

Shared pointer gets overhead with the count thing but it should be use whenever we can use.
