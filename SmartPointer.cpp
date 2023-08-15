#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Createed Entity!" << std::endl;
    }
    
    ~Entity()
    {
        std::cout << "Destroyed Entity!" <<std::endl;
    }
    void Print()
    {

    }
};

int main()
{
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        entity->Print();
    }
    {
        std::shared_ptr<Entity> smart_case = std::make_shared<Entity>();
        {
            std::unique_ptr<Entity> entity = std::make_unique<Entity>();
            std::shared_ptr<Entity> e1 = smart_case;
            entity->Print();
        }
    }


    std::cin.get();
}