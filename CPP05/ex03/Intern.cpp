#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor is called\n";
}

Intern::Intern(const Intern & other)
{
    std::cout << "Intern copy constructor is called\n";
    (void)other;
}

Intern & Intern::operator=(const Intern & other)
{
    std::cout << "Intern copy assignment operator is called\n";
    (void)other;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern destructor is called\n";
}

Form * Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"ShrubberyCreationForm", \
    "PresidentialPardonForm", "RobotomyRequestForm"};
    int i = 0;
    Form *form = NULL;

    while (i < 3)
    {
        if (name.compare(forms[i]) == 0)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        std::cout << "Intern creates form " << name << std::endl;
        form = new ShrubberyCreationForm(target);
        break;
    case 1:
        std::cout << "Intern creates form " << name << std::endl;
        form = new PresidentialPardonForm(target);
        break;
    case 2:
        std::cout << "Intern creates form " << name << std::endl;
        form = new RobotomyRequestForm(target);
        break;
    default:
        std::cout << "Form " << name << " doesn't exist.\n";
        break;
    }
    return form;
}