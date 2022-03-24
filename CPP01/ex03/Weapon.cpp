#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "NoType is created\n";
    this->type = "NoType";
}

Weapon::Weapon(std::string type)
{
    std::cout << type << " is created\n";
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << this->type << " is deleted\n";
}

const std::string &Weapon::getType()
{
    std::string &typeREF = type;
    return (typeREF);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}