#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor is called\n";
}

Intern::Intern(const Intern & other)
{
    std::cout << "Intern copy constructor is called\n";
}

Intern & Intern::operator=(const Intern & other)
{
    std::cout << "Intern copy assignment operator is called\n";
}

Intern::~Intern()
{
    std::cout << "Intern destructor is called\n";
}

