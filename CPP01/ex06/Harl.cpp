#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl is created\n\n";
}

Harl::~Harl()
{
    std::cout << "Harl is deleted\n";
}

void Harl::debug()
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info()
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’";
    std::cout << "t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error()
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
    std::string strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    i = 0;
    while (i < 4)
    {
        if (strs[i].compare(level) == 0)
            break ;
        i++;
    }
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    switch (i)
    {
    case 0:
        (this->*ptr[0])();
    case 1:
        (this->*ptr[1])();
    case 2:
        (this->*ptr[2])();
    case 3:
    {
        (this->*ptr[3])();
        break;
    }
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n\n";
    }
}
