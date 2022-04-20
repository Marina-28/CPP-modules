#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Boris" ,1);
        Bureaucrat b;
        Bureaucrat c(a);
        Bureaucrat d;
        //Bureaucrat e("Moris", 0);
        b = a;

        std::cout << a;
        std::cout << b;
        std::cout << c;
        std::cout << d;

        a.decrement();
        std::cout << a;
        a.increment();
        std::cout << a;
        // a.increment();
        // std::cout << a;

        d.increment();
        std::cout << d;
        d.decrement();
        std::cout << d;
        // d.decrement();
        // std::cout << d;


    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    return (0);
}
