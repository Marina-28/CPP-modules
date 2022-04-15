#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout << "ScavTrap default constructor called\n";
    _name = "ScavTrap";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor with name called\n";
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & other)
{
    std::cout << "ScavTrap copy constructor called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
    std::cout << "ScavTrap copy assignment operator called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

/************************************************************************/

void ScavTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target;
        std::cout << ", causing " << getAttackDamage() << " points of damage!\n";
        _energy_points--;
    }
    else
        std::cout << getName() << " doesn't have enough energy\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode.\n";
}