#include <iostream>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z)
        :x(x), y(y), z(z)
    {

    }

    Vertex(const Vertex& other)
        :x(other.x), y(other.y), z(other.z)
    {
        std::cout << "Copy Vertice" << std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream, const Vertex& Vertex)
{
    stream << Vertex.x << "," << Vertex.y << "," << Vertex.z;
    return stream;
}

int main()
{
    std::vector<Vertex> vertices;
    vertices.reserve(4); //优化策略1：预分配vector的大小
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    vertices.push_back(Vertex(7,8,9));

    vertices.emplace_back(1, 2, 3); //优化策略2：不需要构造对象以后重新复制对象，直接传入构造函数，只有0次复制。


    for(Vertex& v : vertices)
    {
        std::cout << v << std::endl;
    }
    std::cin.get();
}