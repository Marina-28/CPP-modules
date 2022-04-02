#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    _name = "ClapTrap";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor with name called\n";
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
    std::cout << "Copy constructor called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
    std::cout << "Copy assignment operator called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

/************************************************************************/

void ClapTrap::attack(const std::string& target)
{
    if (_energy_points > 0)
    {
        std::cout << getName() << " attacks " << target;
        std::cout << ", causing " << getAttack_damage() << " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << getName() << " doesn't have enough energy\n";
}

/**************************************************************************/

std::string & ClapTrap::getName()
{
    return _name;
}

int & ClapTrap::getHitPoints()
{
    return _hit_points;
}

int & ClapTrap::getEnergyPoints()
{
    return _energy_points;
}

int & ClapTrap::getAttack_damage()
{
    return _attack_damage;
}
