#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor is called\n";
    _target = "Target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) \
: Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm arguments constructor is called\n";
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) \
: Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor is called\n";
    _target = other._target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
    std::cout << "RobotomyRequestForm copy assignment operator is called\n";
    if (this == &other)
        return *this;
    _target = other._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor is called\n";
}

/************************************************************************/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    int a = rand();
    std::cout << "Some drilling noises.\n";
    if (a % 2 == 0)
        std::cout << _target << " has been robotomized successfully.\n";
    else
        std::cout << _target << " has not been robotomized successfully.\n";
}