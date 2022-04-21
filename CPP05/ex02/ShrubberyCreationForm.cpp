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

/*******************************************************************************/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::ofstream out;
    out.open(_target + "_shrubbery");
    if (!out.is_open())
        throw "File is not opened\n";
    out << "....._____.....\n";
    out << "..../33333\\....\n";
    out << ".../333|3o3\\...\n";
    out << "../333o33/33\\..\n";
    out << "..|33\\333o33|..\n";
    out << "...|3o3|333|...\n";
    out << "....\\33333/....\n";
    out << "......|||......\n";
    out << "......|||......\n";
    out << ".....|||||.....\n";
    out.close();
    //std::cout << executor.getName() << " execute form " << this->getName() << std::endl;
}