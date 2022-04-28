//#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("Boris", 146);
    Bureaucrat b("Moris", 1);
    /*ShrubberyCreationForm tests*/
    ShrubberyCreationForm scf("Home");
    try
    {
        //a.signForm(scf);
        b.signForm(scf);
        scf.execute(a);
    }

    /*RobotomyRequestForm tests*/
    // RobotomyRequestForm rrf("Report");
    // try
    // {
    //     //a.signForm(scf);
    //     b.signForm(rrf);
    //     //rrf.execute(a);
    //     rrf.execute(b);
    // }

    // /*PresidentialPardonForm tests*/
    // PresidentialPardonForm ppf("Jay");
    // try
    // {
    //     a.signForm(scf);
    //     b.signForm(ppf);
    //     rrf.execute(a);
    //     ppf.execute(b);
    //     a.executeForm(ppf);
    // }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    catch(std::string ex)
    {
        std::cout << ex;
    }


    return (0);
}
