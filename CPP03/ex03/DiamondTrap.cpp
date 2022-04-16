#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    std::cout << "DiamondTrap default constructor called\n";
    this->_name = "DiamondTrap";
    ClapTrap::_name = _name + "_clap_name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructor with name called\n";
    _name = name;
    ClapTrap::_name = _name + "_clap_name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
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
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << getName() << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}

/************************************************************************/

std::string & DiamondTrap::getName()
{
    return _name;
}