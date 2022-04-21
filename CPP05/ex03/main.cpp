#include "Intern.hpp"

int main()
{
    Intern a;
    Form *form;
    Bureaucrat bur("Boris", 1);

    form = a.makeForm("RobotomyRequestForm", "report");
    //a.makeForm("RobotomyRequestFor", "report");
    /*RobotomyRequestForm tests*/
    // RobotomyRequestForm rrf("Report");
    try
    {
        //a.signForm(scf);
        bur.signForm(*form);
        //rrf.execute(a);
        (*form).execute(bur);
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    catch(std::string ex)
    {
        std::cout << ex;
    }
    delete form;
    return (0);
}
