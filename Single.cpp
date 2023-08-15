# include <iostream>

class Random
{
public:
    Random(const Random&) =delete;
    static Random& Get()
    {   
        static Random S_instance;
        return S_instance;
    }
    static float Float()
    {
        return Get().InFloat();
    }
private:
    float InFloat()
    {
        return m_RandGenerator;
    }
    Random(){}
    float m_RandGenerator=0.5f;
    // static Random S_instance;
};

// Random Random::S_instance;

int main()
{
    float member = Random::Float();
    std::cout << member << std:: endl;
    std::cin.get();
}