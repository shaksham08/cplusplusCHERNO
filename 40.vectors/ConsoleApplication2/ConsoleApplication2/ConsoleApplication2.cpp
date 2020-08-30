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

