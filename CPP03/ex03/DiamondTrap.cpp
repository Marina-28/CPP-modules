#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    std::cout << "DiamondTrap default constructor called\n";
    _name = "DiamondTrap";
    ClapTrap::_name = _name + "_clap_name";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructor with name called\n";
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

DiamondTrap::DiamondTrap(const DiamondTrap & other)
{
    std::cout << "DiamondTrap copy constructor called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other)
{
    std::cout << "DiamondTrap copy assignment operator called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

/************************************************************************/

void DiamondTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        std::cout << "DiamondTrap " << getName() << " attacks " << target;
        std::cout << ", causing " << getAttackDamage() << " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << getName() << " doesn't have enough energy\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << getName();
}