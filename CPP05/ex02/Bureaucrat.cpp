#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150)
{
    std::cout << "Bureaucrat default constructor is called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat arguments constructor is called\n";
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
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
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor is called\n";
}

void Bureaucrat::increment()
{
    if (getGrade() <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrement()
{
    if (getGrade() >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

void Bureaucrat::signForm(Form & form)
{
    form.beSigned(*this);
}

const std::string & Bureaucrat::getName() const
{
    return _name;
}

const int & Bureaucrat::getGrade() const
{
    return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat's grade too high\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat's grade too low\n";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
    return os;
}