#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "HumanB";
    this->weapon = NULL;
    std::cout << name << " is created\n";
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    std::cout << name << " is created\n";
}

HumanB::~HumanB()
{
    std::cout << name << " is deleted \n";
}

void HumanB::attack()
{
    std::cout << name << " attacks with their ";
    if (this->weapon == NULL)
        std::cout << "hands\n";
    else
        std::cout << weapon->getType() << "\n";
}

void    HumanB::setWeapon(Weapon &s)
{
    this->weapon = &s;
}

void    HumanB::setName(std::string name)
{
    this->name = name;
}