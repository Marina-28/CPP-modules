#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat & other);
    Bureaucrat & operator=(const Bureaucrat & other);
    ~Bureaucrat();

    void increment();
    void decrement();

    void signForm(Form & form);

    const std::string & getName();
    int getGrade() const;

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat &other);

#endif