#include "Array.hpp"
#include "Array.tpp"

int main()
{
    Array<int> a(3);
    Array<int> b(a);
    Array<int> c;

    try
    {
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;
        //a[3] = 3;
        
        c = a;
        for (size_t i = 0; i < 3; i++)
        {
            std::cout << c[i] << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cout << "\n! Ooops, probably index is out of range !\n\n";
    }
    
    /****************/

    Array<std::string> as;
    Array<std::string> bs(2);

    bs[0] = "Hello";
    bs[1] = "everyone!";

    as = bs;
    std::cout << as[0] << std::endl;
    std::cout << as[1] << std::endl;

    std::cout << bs[0] << std::endl;
    std::cout << as.size() << std::endl;

}