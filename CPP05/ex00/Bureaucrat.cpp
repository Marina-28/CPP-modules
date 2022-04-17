#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150)
{
    std::cout << "Bureaucrat default constructor is called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat arguments constructor is called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade)
{
    std::cout << "Bureaucrat copy constructor is called\n";
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
    std::cout << "Bureaucrat copy assignment operator is called\n";
    if (this == &other)
        return *this;
    _grade = other._grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor is called\n";
}

const std::string & Bureaucrat::getName()
{
    return _name;
}

const int & Bureaucrat::getGrade()
{
    return _grade;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
    return os;
}