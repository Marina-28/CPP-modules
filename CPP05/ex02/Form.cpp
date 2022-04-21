#include "Form.hpp"

Form::Form() : _name("NoName"), _gradeS(150), _gradeE(150)
{
    std::cout << "Form default constructor is called\n";
    _signature = false;
}

Form::Form(std::string name, int gradeS, int gradeE) : _name(name), \
_gradeS(gradeS), _gradeE(gradeE)
{
    std::cout << "Form arguments constructor is called\n";
    _signature = false;
    if (gradeS < 1 || gradeE < 1)
        throw Form::GradeTooHighException();
    else if (gradeS > 150 || gradeE > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form & other) : _name(other._name), \
_gradeS(other._gradeS), _gradeE(other._gradeE)
{
    std::cout << "Form copy constructor is called\n";
    _signature = other._signature;
}

Form & Form::operator=(const Form & other)
{
    std::cout << "Form copy assignment operator is called\n";
    if (this == &other)
        return *this;
    _signature = other._signature;
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor is called\n";
}

/**********************************************************************/

const std::string & Form::getName()
{
    return _name;
}

const bool & Form::getSignature()
{
    return _signature;
}

const int & Form::getGradeS()
{
    return _gradeS;
}

const int & Form::getGradeE()
{
    return _gradeE;
}

/**********************************************************************/

void Form::beSigned(Bureaucrat & bur)
{
    if (this->_signature)
        std::cout << "Form " << getName() << " is already signed\n";
    else if (bur.getGrade() > this->_gradeS)
    {
        std::cout << "Bureaucrat " << bur.getName() << " couldn’t sign form " << getName();
        std::cout << ", because his grade (" << bur.getGrade() \
        << ") lower, than required (" << getGradeS() << ")\n";
        //throw Form::GradeTooHighException();
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        _signature = true;
        std::cout << "Bureaucrat " << bur.getName() << " signed form " \
        << getName() << std::endl;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form's grade too high\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form's grade too low\n";
}

std::ostream &operator<<(std::ostream &os, Form &other)
{
    os << "Form " << other.getName();
    if (other.getSignature())
        os << " is signed.\n";
    else    
        os << "is unsigned.\n";
    os << "Grade required to sign form is " << other.getGradeS() << std::endl;
    os << "Grade required to execute form is " << other.getGradeE() << std::endl;
    return os;
}