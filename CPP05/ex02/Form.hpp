#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signature;
    const int _gradeS;
    const int _gradeE;
public:
    Form();
    Form(std::string name, int gradeS, int gradeE);
    Form(const Form & other);
    Form & operator=(const Form & other);
    ~Form();

    const std::string & getName();
    const bool & getSignature();
    const int & getGradeS();
    const int & getGradeE();

    void beSigned(Bureaucrat &bur);

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

std::ostream	&operator<<(std::ostream &os, Form &other);

#endif