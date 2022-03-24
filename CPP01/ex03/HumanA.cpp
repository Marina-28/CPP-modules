#include "HumanA.hpp"

HumanA::HumanA(Weapon &s) : weapon(s)
{
    this->name = "HumanA";
    std::cout << name << " is created\n";
}

HumanA::HumanA(std::string name, Weapon &s) : weapon(s)
{
    this->name = name;
    std::cout << name << " is created\n";
}

HumanA::~HumanA()
{
    std::cout << name << " is deleted \n";
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

void HumanA::setName(std::string name)
{
     this->name = name;
}