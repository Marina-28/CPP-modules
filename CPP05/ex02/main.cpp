#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("Boris", 12);
    Bureaucrat b("Moris", 1);
    try
    {
        Form af("af.12.3", 12, 3);
        Form bf("bf.11.4", 11, 4);

        std::cout << af;
        std::cout << bf;

        af.beSigned(a);
        b.signForm(af);
        //bf.beSigned(a);
        b.signForm(bf);

        std::cout << af;
        std::cout << bf;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    return (0);
}
