#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor is called\n";
    _target = "Target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) \
: Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm arguments constructor is called\n";
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) \
: Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm copy constructor is called\n";
    _target = other._target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
    std::cout << "PresidentialPardonForm copy assignment operator is called\n";
    if (this == &other)
        return *this;
    _target = other._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor is called\n";
}