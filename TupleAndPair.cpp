#include <iostream>
#include <chrono>

static bool s_finised=false;

void DoWorker()
{
    while (s_finised)
    {
        std::cout << "working..." << std::endl;
    }
    
}

template<typename T, int N>
class Array
{
public:
    /* data */
    T array[N];
};


int main()
{
    // Array<int,5> a;
    int* b = new int;
    int a[5];
    a[0] = 1;
    a[1] = 2;
    std::cout << *a << std::endl;

    int* c = new int[5];
    std::cout << c[3] << std::endl;
    std::cin.get();
    delete b;
    delete[] c;
}