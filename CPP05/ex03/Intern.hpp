#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(const Intern & other);
    Intern & operator=(const Intern & other);
    ~Intern();

    Form *makeForm(std::string name, std::string target);
};

#endif