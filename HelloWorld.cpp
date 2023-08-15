#include <iostream>
#include <string>

using String =std::string;

class Entity
{
private:
    String m_name;
public:
    Entity() : m_name("Unknown"){}
    Entity(const String& name) : m_name(name){}
    const String& GetName() const { return m_name; }
};

void Function();

int main()
{
    int* a=new int;
    *a=5;
    std::cout << *a << std::endl;
    Entity* e;
    {
        Entity* entity = new Entity("Zhoufu");
        e = entity;
        std::cout<<entity->GetName()<< std::endl;
        std::cin.get();
    }
}