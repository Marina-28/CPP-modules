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

        std::cout << a.getName() << " " << a.getGrade() << std::endl;
        std::cout << b.getName() << " " << b.getGrade() << std::endl;
        std::cout << c.getName() << " " << c.getGrade() << std::endl;
        std::cout << d.getName() << " " << d.getGrade() << std::endl;

        a.decrement();
        std::cout << a.getName() << " " << a.getGrade() << std::endl;
        a.increment();
        std::cout << a.getName() << " " << a.getGrade() << std::endl;
        // a.increment();
        // std::cout << a.getName() << " " << a.getGrade() << std::endl;

        d.increment();
        std::cout << d.getName() << " " << d.getGrade() << std::endl;
        d.decrement();
        std::cout << d.getName() << " " << d.getGrade() << std::endl;
        // d.decrement();
        // std::cout << d.getName() << " " << d.getGrade() << std::endl;


    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    return (0);
}
