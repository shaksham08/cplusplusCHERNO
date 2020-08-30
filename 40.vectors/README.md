# Vectors In C++

```c++
#include <iostream>
#include<string>
#include<vector>

struct Vertex
{
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << std::endl;
    return stream;
}

int main()
{

    std::vector<Vertex> vertices;
    std::cout << "Hello World!\n";
}
```

Look for basics on internet like geeksforgeeks

Now how can we avoid copying in vectors more and more,

```c++
#include <iostream>
#include<string>
#include<vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z) :x(x), y(y), z(z) {

    }

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied"<<std::endl;
    }

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << std::endl;
    return stream;
}

int main()
{

    std::vector<Vertex> vertices;
    vertices.push_back(Vertex(7, 8, 9));
    vertices.push_back(Vertex(7, 8, 9));
    vertices.push_back(Vertex(7, 8, 9));
}
```

This just prints Copied!! 6 times

1. 1st copy is done when we just initialize the 1st vector, what is does is first creae the obeject in the main class and then it copies to the memory where vector is there.This is first we can omtimize first like we can create the instance inplace in the vector memory itself

2. Now coming to the second push we get total of 3 copied message and we know why thats coming;The third copied message is because it copies first one into it as it resize more to store. So here also there can be an optimisation like if we know that we are gonna push 3 things then lets tell vector to make space for three itself so we dont have to resize.

3. Now on third push we get more 3 copy message.

```c++
#include <iostream>
#include<string>
#include<vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z) :x(x), y(y), z(z) {

    }

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied"<<std::endl;
    }

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << std::endl;
    return stream;
}

int main()
{

    std::vector<Vertex> vertices;
    vertices.reserve(3); //make sure we have ennough memory
    vertices.push_back(Vertex(7, 8, 9));
    vertices.push_back(Vertex(7, 8, 9));
    vertices.push_back(Vertex(7, 8, 9));
}
```

using above code we only get 3 copies which is half of what we were getting earlier and this improves exponentially.

Now lets instantiate the object inplace so that we dont have to make more 3 copies;

```c++
#include <iostream>
#include<string>
#include<vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z) :x(x), y(y), z(z) {

    }

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied"<<std::endl;
    }

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << " , " << vertex.y << std::endl;
    return stream;
}

int main()
{

    std::vector<Vertex> vertices;
    vertices.reserve(3); //make sure we have ennough memory
    vertices.emplace_back(7, 8, 9);
    vertices.emplace_back(7, 8, 9);
    vertices.emplace_back(7, 8, 9);
}
```

Now we dont get any copy message

now not a single copy message is thhere and we modified it 6 times and it runs a lot faster than our last code.

So to omtimize we have to make sure to understand how each things work internally.
