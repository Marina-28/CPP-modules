#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor is called\n";
    _target = "Target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) \
: Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm arguments constructor is called\n";
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) \
: Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor is called\n";
    _target = other._target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
    std::cout << "ShrubberyCreationForm copy assignment operator is called\n";
    if (this == &other)
        return *this;
    _target = other._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor is called\n";
}